using System;

// Forward kinematics for a decoded .anm pose. pose[i] = {tx,ty,tz, rxDeg,ryDeg,rzDeg}; parents[i] = -1 for root.
public static class AnmFk
{
    static double[] Mul(double[] a, double[] b)
    {
        var r = new double[9];
        for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) r[i * 3 + j] = a[i * 3] * b[j] + a[i * 3 + 1] * b[3 + j] + a[i * 3 + 2] * b[6 + j];
        return r;
    }
    static double[] Rx(double t) { double c = Math.Cos(t), s = Math.Sin(t); return new double[] { 1, 0, 0, 0, c, -s, 0, s, c }; }
    static double[] Ry(double t) { double c = Math.Cos(t), s = Math.Sin(t); return new double[] { c, 0, s, 0, 1, 0, -s, 0, c }; }
    static double[] Rz(double t) { double c = Math.Cos(t), s = Math.Sin(t); return new double[] { c, -s, 0, s, c, 0, 0, 0, 1 }; }

    // order: "XYZ" => R = Rx*Ry*Rz ; "ZYX" => R = Rz*Ry*Rx. sign flips the angle direction. transposeOffset uses R^T * t.
    public static double[][] Run(float[][] pose, int[] parents, string order, double sign)
    {
        int n = pose.Length; var P = new double[n][]; var W = new double[n][];
        for (int i = 0; i < n; i++)
        {
            double rx = sign * pose[i][3] * Math.PI / 180, ry = sign * pose[i][4] * Math.PI / 180, rz = sign * pose[i][5] * Math.PI / 180;
            double[] R = order == "XYZ" ? Mul(Mul(Rx(rx), Ry(ry)), Rz(rz)) : Mul(Mul(Rz(rz), Ry(ry)), Rx(rx));
            double[] t = { pose[i][0], pose[i][1], pose[i][2] };
            if (parents[i] < 0) { P[i] = t; W[i] = R; }
            else
            {
                var pr = W[parents[i]]; var pp = P[parents[i]];
                P[i] = new double[] { pp[0] + pr[0] * t[0] + pr[1] * t[1] + pr[2] * t[2], pp[1] + pr[3] * t[0] + pr[4] * t[1] + pr[5] * t[2], pp[2] + pr[6] * t[0] + pr[7] * t[1] + pr[8] * t[2] };
                W[i] = Mul(pr, R);
            }
        }
        return P;
    }
}
