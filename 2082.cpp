#include <iostream>

using namespace std;

int main()
{
    int value[27] = {0};
    int limit[27] = {0};
    int N;
    cin >> N;
    for (int i = 1; i < 27; i++)
    {
        value[i] = i;
    }
    while (N--)
    {
        long long dp[51] = {0};
        dp[0] = 1;
        long long temp[51] = {0};
        for (int i = 1; i < 27; i++)
        {
            cin >> limit[i];
        }
        for (int i = 1; i <= 26; i++)
        {
            for (int j = 0; j <= 50; j++)
            {
                for (int k = 0; k <= limit[i] && j + k * value[i] <= 50; k++)
                {
                    temp[j + k * value[i]] += dp[j];
                }
            }
            for (int j = 0; j <= 50; j++)
            {
                dp[j] = temp[j];
                temp[j] = 0;
            }
        }
        long long sum = 0;
        for (int i = 1; i <= 50; i++)
        {
            sum += dp[i];
        }
        cout << sum << endl;
    }
    return 0;
}