#include <iostream>

using namespace std;

int main()
{
    short n;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        short a = 0, b = 0, c = 0;
        float t;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            if (t > 0)
            {
                c++;
            }
            else if (t == 0)
            {
                b++;
            }
            else
            {
                a++;
            }
        }
        cout << a << ' ' << b << ' ' << c << endl;
    }
    return 0;
}