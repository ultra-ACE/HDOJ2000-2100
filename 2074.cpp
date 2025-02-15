#include <iostream>

using namespace std;

int main()
{
    int n;
    char I, E;
    while (cin >> n >> I >> E)
    {
        if (n == 1)
        {
            cout << I << '\n'
                 << endl;
            continue;
        }
        char map[81][81] = {' '};
        bool flag = true;
        int l = n / 2;
        map[l][l] = I;
        for (int i = 1; i <= l; i++)
        {
            int s, e;
            s = l - i;
            e = l + i;
            for (int j = s; j <= e; j++)
            {
                if (flag)
                {
                    map[l + i][j] = map[l - i][j] = map[j][l + i] = map[j][l - i] = E;
                }
                else
                {
                    map[l + i][j] = map[l - i][j] = map[j][l + i] = map[j][l - i] = I;
                }
            }
            flag = !flag;
        }
        map[0][0] = map[0][n - 1] = map[n - 1][0] = map[n - 1][n - 1] = ' ';
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << map[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}