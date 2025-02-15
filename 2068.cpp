#include <iostream>

using namespace std;

long long C[26][26];

long long getC(int n, int m)
{
    if (C[n][m] != 0)
    {
        return C[n][m];
    }
    if (n == m || m == 0)
    {
        C[n][m] = 1;
        return 1;
    }
    C[n][m] = getC(n - 1, m - 1) + getC(n - 1, m);
    return C[n][m];
}

int main()
{
    long long wrong[26] = {0};
    wrong[2] = 1;
    wrong[3] = 2;
    for (int i = 4; i < 26; i++)
    {
        wrong[i] = (i - 1) * (wrong[i - 2] + wrong[i - 1]);
    }
    memset(C,0,sizeof(C));
    int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        int m;
        if (n % 2 != 0)
        {
            m = n / 2 + 1;
        }
        else
        {
            m = n / 2;
        }
        long long ans = 0;
        while (m < n)
        {
            ans += getC(n, m) * wrong[n - m];
            m++;
        }
        cout << ans + 1 << endl;
    }
    return 0;
}