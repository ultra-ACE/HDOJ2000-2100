#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int m, n;
    while (cin >> m >> n)
    {
        long long **MM = new long long *[m];
        int max = 0, max_m = 0, max_n = 0;
        for (int i = 0; i < m; i++)
        {
            MM[i] = new long long[n];
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> MM[i][j];
                if (abs(MM[i][j]) > abs(max))
                {
                    max = MM[i][j];
                    max_m = i;
                    max_n = j;
                }
            }
        }
        cout << max_m + 1 << ' ' << max_n + 1 << ' ' << max << endl;
    }
    return 0;
}