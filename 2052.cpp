#include <iostream>

using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        for (int i = 0; i < m + 2; i++)
        {
            for (int j = 0; j < n + 2; j++)
            {
                if ((i == 0 && j == 0) || (i == m + 1 && j == n + 1) || (i == 0 && j == n + 1) || (i == m + 1 && j == 0))
                {
                    cout << '+';
                }
                else if (i == 0 || i == m + 1)
                {
                    cout << '-';
                }
                else if (j == 0 || j == n + 1)
                {
                    cout << '|';
                }
                else
                {
                    cout << ' ';
                }
            }
            cout << '\n';
        }
    }
    return 0;
}