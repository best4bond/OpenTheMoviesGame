using System;
using System.Collections.Generic;

// Structural walker for The Movies .msh files (format version 10), derived from LH_LoadMeshBinary / LH_LoadMeshHeader /
// LH_LoadMeshMaterial / LH_LoadAuxPolygonChunk / LH_LoadMeshPrimitiveHeader. Finds submesh matrices and the name table.
public class MshInfo
{
    public string Error;
    public int Version, Tex, Mat, Sub, HdrLen, Rooms;
    public int SubStart, SkelStart, NameStart, Prims;
    public List<float[]> SubMatrix = new List<float[]>();
    public List<int> SubPrimCount = new List<int>();
    public List<string> Names = new List<string>();
    public List<float[]> VertBounds = new List<float[]>(); // per submesh: min xyz, max xyz over raw (non-quantised) vertices, if available
    public int BoneCount;
}

public static class MshWalk
{
    static int Align4(int p) { return (p & 3) != 0 ? (p - (p & 3)) + 4 : p; }
    static int I32(byte[] b, int p) { return BitConverter.ToInt32(b, p); }
    static int U16(byte[] b, int p) { return BitConverter.ToUInt16(b, p); }

    static int Chunk(byte[] b, int p)
    {
        int nv = U16(b, p), nt = U16(b, p + 4);
        return Align4(p + 8 + nv * 12 + nt * 6);
    }

    public static MshInfo Walk(byte[] b)
    {
        var m = new MshInfo();
        try { Inner(b, m); } catch (Exception ex) { m.Error = "exception: " + ex.Message; }
        return m;
    }

    static void Inner(byte[] b, MshInfo m)
    {
        m.Version = I32(b, 0); if (m.Version != 10) { m.Error = "version " + m.Version; return; }
        m.Tex = I32(b, 4); m.Mat = I32(b, 8); m.Sub = I32(b, 12);
        int b10 = b[0x10], b11 = b[0x11], b12 = b[0x12], b13 = b[0x13], b15 = b[0x15], ctl = b[0x16], b17 = b[0x17];
        int p = 0x18; int d18 = 0, d1c = 0, d20 = 0;
        if ((ctl & 2) != 0) { d18 = I32(b, p); p += 4; }
        if ((ctl & 0x40) != 0) { d1c = I32(b, p); p += 4; }
        if ((ctl & 0x80) != 0) { d20 = I32(b, p); p += 4; }
        m.HdrLen = p; m.Rooms = d20;
        p += 32 * m.Tex;
        for (int i = 0; i < m.Mat; i++) { int f = b[p + 0xE]; p += ((f & 4) != 0) ? 0x18 : 0x14; }
        if (b13 != 0) p = Chunk(b, p);
        if ((ctl & 0x10) != 0) p = Chunk(b, p);
        if ((ctl & 8) != 0) p = Chunk(b, p);
        if ((b15 & 4) != 0) p = Chunk(b, p);
        if ((ctl & 4) != 0) p = Chunk(b, p);
        if ((b15 & 2) != 0) p = Chunk(b, p);
        if ((ctl & 1) != 0) p = Chunk(b, p);
        for (int r = 0; r < d20; r++) { p += 32; p = Chunk(b, p); }
        m.SubStart = p;
        for (int s = 0; s < m.Sub; s++)
        {
            int prim = b[p]; int sf = b[p + 3];
            var mat = new float[12]; for (int k = 0; k < 12; k++) mat[k] = BitConverter.ToSingle(b, p + 4 + 4 * k);
            m.SubMatrix.Add(mat); m.SubPrimCount.Add(prim);
            p += 52; if ((sf & 0x10) != 0) p += 4;
            for (int q = 0; q < prim; q++)
            {
                int tri = I32(b, p + 4), vert = I32(b, p + 8); int fl = b[p + 0xC], f2 = b[p + 0xD];
                int hp = 0x10; if ((fl & 0x10) != 0) hp += 12; if ((fl & 0x20) != 0) hp += 0x38; int extraCount = 0;
                if ((fl & 0x40) != 0) { extraCount = I32(b, p + hp); hp += 4; }
                p += hp;
                p += tri * 6; p = Align4(p);
                if ((fl & 0x20) != 0) { p += vert * 16; if ((f2 & 1) != 0) p += vert * 4; p = Align4(p); }
                else
                {
                    while (m.VertBounds.Count <= s) m.VertBounds.Add(new float[] { 1e9f, 1e9f, 1e9f, -1e9f, -1e9f, -1e9f });
                    var vb = m.VertBounds[s];
                    for (int v = 0; v < vert; v++) for (int k = 0; k < 3; k++) { float x = BitConverter.ToSingle(b, p + 32 * v + 4 * k); if (x < vb[k]) vb[k] = x; if (x > vb[3 + k]) vb[3 + k] = x; }
                    p += vert * 32; if ((f2 & 1) != 0) p += vert * 8;
                }
                if ((fl & 1) != 0) p += vert * 20;
                if (extraCount != 0) p += extraCount * 8;
                m.Prims++;
                if (p > b.Length) { m.Error = "overrun in submesh " + s; return; }
            }
        }
        m.SkelStart = p;
        if (b10 != 0) { int bones = I32(b, p + 4); m.BoneCount = bones; p += 8 + bones * 84; }
        m.NameStart = p;
        if (b11 != 0 || (b17 & 1) != 0)
        {
            for (int s = 0; s < m.Sub; s++)
            {
                if (p + 32 > b.Length) { m.Error = "names past eof"; return; }
                int l = 0; while (l < 32 && b[p + l] != 0) l++;
                m.Names.Add(System.Text.Encoding.ASCII.GetString(b, p, l)); p += 32;
            }
        }
    }
}
