#include <iostream>

using namespace std;

int main()
{
    int n, a[22];
    long long t, m;
    long long g[22] = {0};
    long long f[22] = {0};
    f[1] = 1;
    f[2] = 4;
    for (int i = 3; i < 22; i++)
    {
        f[i] = (f[i - 1] + 1) * i;
    }
    for (int i = 1; i < 22; i++)
    {
        g[i] = f[i] / i;
    }
    while (cin >> n >> m)
    {
        for (int i = 0; i < 22; i++)
        {
            a[i] = i;
        }
        while (n && m)
        {
            if (m % g[n] != 0)
            {
                t = m / g[n] + 1;
            }
            else
            {
                t = m / g[n];
            }
            if (t > 0)
            {
                cout << a[t];
                for (int i = t; i <= n; i++)
                {
                    a[i] = a[i + 1];
                }
                m = m - ((t - 1) * g[n] + 1);
                if (m == 0)
                {
                    cout << '\n';
                }
                else
                {
                    cout << ' ';
                }
                n--;
            }
        }
    }
    return 0;
}