#include <iostream>

using namespace std;

int main()
{
    int n;
    int coin[5] = {1, 5, 10, 25, 50};
    int dp[110][260];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= 100; j++)
        {
            for (int k = coin[i]; k <= 250; k++)
            {
                dp[j][k] += dp[j - 1][k - coin[i]];
            }
        }
    }
    while (cin >> n)
    {
        long long ans = 0;
        for (int i = 0; i <= 100; i++)
        {
            ans += dp[i][n];
        }
        cout << ans << endl;
    }
    return 0;
}