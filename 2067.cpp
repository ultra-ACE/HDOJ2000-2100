#include <iostream>

using namespace std;

int main()
{
    int n, i, j, count = 1;
    long long dp[37][37];
    for (i = 0; i < 37; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (i == 0 && j == 0)
            {
                dp[i][j] = 1;
            }
            else if (i == j)
            {
                dp[i][j] = dp[i][j - 1];
            }
            else if (j == 0)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
    }
    while (cin >> n)
    {
        if (n == -1)
        {
            break;
        }
        cout << count++ << ' ' << n << ' ' << dp[n][n] * 2 << endl;
    }
    return 0;
}