#include <iostream>

using namespace std;

int res[31][31] = {0};

int C(int n, int m)
{
    if (m == 0 || m == n)
        return 1;
    if (res[n][m] != 0)
        return res[n][m];
    return res[n][m] = C(n - 1, m) + C(n - 1, m - 1);
}

int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                cout << C(i, j) << ' ';
            }
            cout << '\n';
        }
        cout << endl;
    }
    return 0;
}