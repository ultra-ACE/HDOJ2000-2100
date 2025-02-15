#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        int score[9] = {0};
        int limit[9] = {0};
        for (int i = 1; i <= k; i++)
        {
            cin >> score[i] >> limit[i];
        }
        int dp[41] = {0};
        int temp[41] = {0};
        dp[0] = 1;
        for (int i = 1; i <= k; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                for (int l = 0; j + score[i] * l <= n && l <= limit[i]; l++)
                {
                    temp[j + score[i] * l] += dp[j];
                }
            }
            for (int j = 0; j <= n; j++)
            {
                dp[j] = temp[j];
                temp[j] = 0;
            }
        }
        cout << dp[n] << endl;
    }
    return 0;
}