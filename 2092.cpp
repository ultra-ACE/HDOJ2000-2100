#include <iostream>
#include <cmath>

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
        int delt = n * n - 4 * m;
        if (delt < 0)
        {
            cout << "No" << endl;
            continue;
        }
        if (delt != pow((int)sqrt(delt), 2))
        {
            cout << "No" << endl;
            continue;
        }
        cout << "Yes" << endl;
    }
    return 0;
}