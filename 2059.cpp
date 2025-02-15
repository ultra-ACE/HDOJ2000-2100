#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

double charge(int p[], int start, int end, int C, int T, int VT1, int VT2)
{
    int dis = p[end] - p[start];
    if (dis > C)
    {
        return T + C / (double)VT1 + (dis - C) / (double)VT2;
    }
    else
    {
        return T + dis / (double)VT1;
    }
}

int main()
{
    int L, N, C, T, VR, VT1, VT2;
    while (cin >> L)
    {
        cin >> N >> C >> T;
        cin >> VR >> VT1 >> VT2;
        int *p = new int[N + 2];
        for (int i = 1; i <= N; i++)
        {
            cin >> p[i];
        }
        p[0] = 0;
        p[N + 1] = L;
        double timeR = L / (VR * 1.0); // 兔子用时
        double *dp = new double[N + 2];
        double m;
        dp[0] = 0;
        for (int i = 1; i < N + 2; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (j == 0)
                {
                    if (p[i] - p[j] > C)
                    {
                        m = C / (double)VT1 + (p[i] - p[j] - C) / (double)VT2;
                    }
                    else
                    {
                        m = (p[i] - p[j]) / (double)VT1;
                    }
                }
                else
                {
                    m = min(m, dp[j] + charge(p, j, i, C, T, VT1, VT2));
                }
            }
            dp[i] = m;
        }
        if (dp[N + 1] < timeR)
        {
            cout << "What a pity rabbit!" << endl;
        }
        else
        {
            cout << "Good job,rabbit!" << endl;
        }
    }
    return 0;
}