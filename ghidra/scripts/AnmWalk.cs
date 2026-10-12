using System;
using System.IO;
using System.Collections.Generic;

// Structural walker for The Movies .anm files (version 12), derived from FUN_00988d60 / 984ad0 / 984b40 /
// 985960 / 9859c0 / a4e030 / a4deb0 / a4dab0 / 984a30 / 984fe0. Returns the offset it ended at.
public static class AnmWalk
{
    public static List<string> LastNames = new List<string>();
    public static List<float[]> LastData = new List<float[]>();
    public static List<int> LastOffsets = new List<int>();
    static int Align4(int p) { return (p & 3) != 0 ? (p - (p & 3)) + 4 : p; }
    static uint U32(byte[] b, int p) { return BitConverter.ToUInt32(b, p); }
    static ushort U16(byte[] b, int p) { return BitConverter.ToUInt16(b, p); }

    // FUN_00a4dab0: byte size of an RLE array of 'frames' samples starting at p (after the mask word)
    public static int ArrayBytes(byte[] b, int p, int mask, int frames)
    {
        int words = 0; int n = frames; int guard = 0;
        while (n != 0)
        {
            if (p + 2 > b.Length || ++guard > 400000) return -1;
            int w = U16(b, p);
            int dec;
            if ((mask & w) == 0) { p += 2; dec = -1; words += 1; }
            else
            {
                int a = w - mask;
                int hi = ((a >> 1) & 0xFFFF) & ((~(mask - 1)) >> 1 & 0xFFFF);
                int lo = (mask - 1) & w;
                dec = -(hi | lo);
                words += 2; p += 4;
            }
            n += dec;
            if (n < 0) return -2;
        }
        return words * 2;
    }

    // one array: u16 mask + RLE data; returns new position or -1
    static int Array(byte[] b, int p, int frames, out string err)
    {
        err = null;
        if (p + 2 > b.Length) { err = "eof mask"; return -1; }
        int mask = U16(b, p);
        int sz = ArrayBytes(b, p + 2, mask, frames);
        if (sz < 0) { err = "rle " + sz + " mask=" + mask + " frames=" + frames; return -1; }
        return p + 2 + (sz & ~1);
    }

    static int WalkInner(byte[] b, out string err, out int sets, out int channels, out int tracks)
    {
        err = null; sets = 0; channels = 0; tracks = 0;
        int ver = (int)U32(b, 0);
        if (ver != 12) { err = "ver " + ver; return -1; }
        int A = b[4], B = b[5], frames = U16(b, 6);
        int p = 0x3C;
        if (A >= 2) p += (A - 1) * 48;
        for (int s = 0; s < A; s++)
        {
            p = Align4(p);
            if (p + 0x18 > b.Length) { err = "eof set hdr"; return p; }
            uint cnt = U32(b, p); int u16a = U16(b, p + 4); int f = b[p + 7];
            int hdr = ((f & 2) != 0) ? 0x1C : 0x18;
            p += hdr;
            if ((f & 1) != 0) p += 4;
            int N = u16a & 0xFF;
            p += N; p = Align4(p);
            int fr = (int)(cnt & 0x7FFF);
            for (int c = 0; c < N; c++)
            {
                if (p + 4 > b.Length) { err = "eof chan"; return p; }
                bool constant = (b[p] & 1) != 0;
                p += 4;
                for (int k = 0; k < 3; k++) { p = Array(b, p, fr, out err); if (p < 0) { err = "set" + s + " ch" + c + " A" + k + ": " + err; return p; } }
                p = Align4(p);
                if (!constant)
                {
                    for (int k = 0; k < 3; k++) { p = Array(b, p, fr, out err); if (p < 0) { err = "set" + s + " ch" + c + " B" + k + ": " + err; return p; } }
                }
                else p += 12;
                p = Align4(p);
                channels++;
            }
            if ((f & 4) != 0) p += u16a * (int)cnt * 12;
            sets++;
        }
        p = Align4(p);
        for (int t = 0; t < B; t++)
        {
            if (p + 0x24 > b.Length) { err = "eof track"; return p; }
            LastOffsets.Add(p); int f = b[p + 0x20]; { int nl = 0; while (nl < 32 && b[p + nl] != 0) nl++; LastNames.Add(System.Text.Encoding.ASCII.GetString(b, p, nl)); }
            { int hl = ((f & 2) != 0) ? 0x28 : 0x24; var arr = new float[frames * 3]; if (p + hl + frames * 12 <= b.Length) Buffer.BlockCopy(b, p + hl, arr, 0, frames * 12); LastData.Add(arr); p += hl; }
            p += frames * 12;
            tracks++;
        }
        return p;
    }

    public static int Walk(byte[] b, out string err, out int sets, out int channels, out int tracks)
    {
        try { return WalkInner(b, out err, out sets, out channels, out tracks); }
        catch (Exception ex) { err = "exception: " + ex.Message; sets = 0; channels = 0; tracks = 0; return -3; }
    }

    // FUN_00a4db20: expand one RLE array into 'frames' u16 samples
    public static ushort[] Decode(byte[] b, int p, int frames, out int endPos)
    {
        int mask = U16(b, p); p += 2; var o = new ushort[frames]; int i = 0;
        while (i < frames)
        {
            int w = U16(b, p);
            if ((mask & w) == 0) { o[i++] = (ushort)w; p += 2; }
            else
            {
                int a = w - mask; int hi = ((a >> 1) & 0xFFFF) & ((~(mask - 1)) >> 1 & 0xFFFF); int lo = (mask - 1) & w; int run = hi | lo;
                ushort v = U16(b, p + 2); for (int k = 0; k < run && i < frames; k++) o[i++] = v; p += 4;
            }
        }
        endPos = p; return o;
    }

    public static string Dump(byte[] b, int maxChan)
    {
        var sb = new System.Text.StringBuilder();
        int A = b[4], B = b[5], frames = U16(b, 6);
        sb.AppendLine("A=" + A + " B=" + B + " frames=" + frames);
        int p = 0x3C; if (A >= 2) p += (A - 1) * 48;
        for (int s = 0; s < A; s++)
        {
            p = Align4(p);
            uint cnt = U32(b, p); int u16a = U16(b, p + 4); int f = b[p + 7]; int b6 = b[p + 6];
            int hdr = ((f & 2) != 0) ? 0x1C : 0x18;
            sb.AppendLine(string.Format("set{0}: cnt=0x{1:X} u16=0x{2:X} b6={3} flags={4} floats={5:G5},{6:G5},{7:G5},{8:G5}", s, cnt, u16a, b6, f, BitConverter.ToSingle(b, p + 8), BitConverter.ToSingle(b, p + 12), BitConverter.ToSingle(b, p + 16), BitConverter.ToSingle(b, p + 20)));
            p += hdr; if ((f & 1) != 0) { sb.AppendLine("   rate=" + BitConverter.ToSingle(b, p)); p += 4; }
            int N = u16a & 0xFF; var ids = new List<int>(); for (int k = 0; k < N; k++) ids.Add(b[p + k]);
            sb.AppendLine("   ids: " + string.Join(",", ids)); p += N; p = Align4(p);
            int fr = (int)(cnt & 0x7FFF);
            for (int c = 0; c < N; c++)
            {
                bool constant = (b[p] & 1) != 0; p += 4;
                var comp = new ushort[6][]; int e;
                for (int k = 0; k < 3; k++) { comp[3 + k] = Decode(b, p, fr, out e); p = e; }
                p = Align4(p);
                if (!constant) { for (int k = 0; k < 3; k++) { comp[k] = Decode(b, p, fr, out e); p = e; } }
                else { for (int k = 0; k < 3; k++) { comp[k] = new ushort[] { (ushort)(int)BitConverter.ToSingle(b, p + 4 * k) }; } p += 12; }
                p = Align4(p);
                if (c < maxChan)
                {
                    var line = new System.Text.StringBuilder("   ch" + c + (constant ? " [const]" : "") + ":");
                    for (int k = 0; k < 6; k++)
                    {
                        ushort mn = 65535, mx = 0; foreach (var v in comp[k]) { if (v < mn) mn = v; if (v > mx) mx = v; }
                        line.Append(string.Format("  c{0}[{1}..{2}] f={3}", k, mn, mx, comp[k][0]));
                    }
                    sb.AppendLine(line.ToString());
                }
            }
            if ((f & 4) != 0) p += u16a * (int)cnt * 12;
        }
        return sb.ToString();
    }

    // Decodes set 'setIdx', returns per-bone [tx,ty,tz,rxDeg,ryDeg,rzDeg] at 'frame', plus the parent table and range.
    public static float[][] Pose(byte[] b, int setIdx, int frame, out int[] parents, out float range, out int frames)
    {
        int A = b[4]; int p = 0x3C; if (A >= 2) p += (A - 1) * 48;
        parents = null; range = 10f; frames = 0;
        for (int s = 0; s < A; s++)
        {
            p = Align4(p);
            uint cnt = U32(b, p); int u16a = U16(b, p + 4); int f = b[p + 7];
            p += ((f & 2) != 0) ? 0x1C : 0x18;
            if ((f & 1) != 0) { range = BitConverter.ToSingle(b, p); p += 4; }
            int N = u16a & 0xFF; var par = new int[N]; for (int k = 0; k < N; k++) par[k] = b[p + k] == 255 ? -1 : b[p + k];
            p += N; p = Align4(p);
            int fr = (int)(cnt & 0x7FFF);
            var res = new float[N][];
            for (int c = 0; c < N; c++)
            {
                bool constant = (b[p] & 1) != 0; p += 4; int e;
                var rot = new ushort[3][]; for (int k = 0; k < 3; k++) { rot[k] = Decode(b, p, fr, out e); p = e; }
                p = Align4(p);
                var t = new float[3];
                if (!constant) { for (int k = 0; k < 3; k++) { var a = Decode(b, p, fr, out e); p = e; t[k] = ((a[frame] / 32767f) - 1f) * range; } }
                else { for (int k = 0; k < 3; k++) t[k] = BitConverter.ToSingle(b, p + 4 * k); p += 12; }
                p = Align4(p);
                res[c] = new float[] { t[0], t[1], t[2],
                    (float)(((rot[0][frame] - 0.5) / 32768.0 - 1.0) * 180.0), (float)(((rot[1][frame] - 0.5) / 32768.0 - 1.0) * 180.0), (float)(((rot[2][frame] - 0.5) / 32768.0 - 1.0) * 180.0) };
            }
            if (s == setIdx) { parents = par; frames = fr; return res; }
            if ((f & 4) != 0) p += u16a * (int)cnt * 12;
        }
        return null;
    }
}
