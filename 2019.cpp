#include <iostream>

using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
        {
            break;
        }
        int *d = new int[n + 1];
        int flag = 0;
        for (int i = 0; i <= n; i++)
        {
            int t;
            cin >> t;
            if (t < m)
            {
                d[i] = t;
            }
            else if (flag == 0)
            {
                d[i] = m;
                d[++i] = t;
                flag = 1;
            }
            else
            {
                d[i] = t;
            }
        }
        for (int i = 0; i <= n; i++)
        {
            cout << d[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}