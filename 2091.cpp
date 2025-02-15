#include <iostream>

using namespace std;

int main()
{
    char c;
    while (cin >> c)
    {
        if (c == '@')
        {
            break;
        }
        char map[100][100];
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < 100; j++)
            {
                map[i][j] = ' ';
            }
        }
        int n;
        cin >> n;
        map[0][n - 1] = c;
        for (int i = 1; i <= n - 1; i++)
        {
            map[i][n - 1 - i] = map[i][n - 1 + i] = c;
        }
        for (int i = 0; i < 2 * n - 1; i++)
        {
            map[n - 1][i] = c;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= n - 1 + i; j++)
            {
                cout << map[i][j];
            }
            cout << '\n';
        }
        cout << endl;
    }
    return 0;
}
