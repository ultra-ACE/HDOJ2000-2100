#include <iostream>

using namespace std;

int main()
{
    int d[100];
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        int min, min_i;
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
            if (i == 0)
            {
                min = d[i];
                min_i = i;
            }
            if (d[i] < min)
            {
                min = d[i];
                min_i = i;
            }
        }
        int t = min;
        d[min_i] = d[0];
        d[0] = min;
        for (int i = 0; i < n; i++)
        {
            cout << d[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}