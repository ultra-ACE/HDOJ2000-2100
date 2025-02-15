#include <iostream>
#include<algorithm>
#include <cmath>

using namespace std;

int main()
{
    int C, N;
    cin >> C;
    while (C--)
    {
        int dp[102][102] = {0};
        int arr[102][102] = {0};
        cin >> N;
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                dp[i][j] = max(dp[i - 1][j - 1] + arr[i][j], dp[i - 1][j] + arr[i][j]);
            }
        }
        int M = 0;
        for (int i = 1; i <= N; i++)
        {
            if (M < dp[N][i])
                M = dp[N][i];
        }
        cout << M << endl;
    }
    return 0;
}