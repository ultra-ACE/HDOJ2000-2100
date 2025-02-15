#include <iostream>

using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        int T;
        if (n % m != 0)
        {
            T = n / m + 1;
        }
        else
        {
            T = n / m;
        }
        int x = 1; // 系数
        for (int i = 0; i < T; i++)
        {
            if (i == T - 1) // 最后一轮
            {
                if (n % m != 0)
                    m = n % m;
                int ans = (2 * x + m - 1);
                cout << ans << endl;
            }
            else
            {
                int ans = (2 * x + m - 1);
                x = x + m;
                cout << ans << ' ';
            }
        }
    }
    return 0;
}