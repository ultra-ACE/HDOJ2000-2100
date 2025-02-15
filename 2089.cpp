#include <iostream>

using namespace std;

int a[10];
long long f[10][2];

long long dfs(int length, bool limit, int pre)
{
    if (length == -1)
        return 1;
    if (!limit && f[length][pre] != -1)
        return f[length][pre];
    long long res = 0;
    int end = limit ? a[length] : 9;
    for (int i = 0; i <= end; i++)
    {
        if (i == 4 || (pre && i == 2))
            continue;
        res += dfs(length - 1, limit && i == end, i == 6);
    }
    if (!limit)
        f[length][pre] = res;
    return res;
}

long long dp(long long n)
{
    memset(f, -1, sizeof(f));
    int length = 0;
    while (n)
    {
        a[length++] = n % 10;
        n = n / 10;
    }
    return dfs(length - 1, 1, 0);
}
int main()
{
    long long l, r;
    while (cin >> l >> r)
    {
        if (l == 0 && r == 0)
        {
            break;
        }
        cout << dp(r) - dp(l - 1) << endl;
    }
    return 0;
}