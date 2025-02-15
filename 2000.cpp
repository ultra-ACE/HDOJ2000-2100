#include <iostream>

using namespace std;
int main()
{

    char a, b, c;
    while (cin >> a >> b >> c)
    {
        if (a > b)
        {
            char t = b;
            b = a;
            a = t;
        }
        if (a > c)
        {
            char t = c;
            c = a;
            a = t;
        }
        if (b > c)
        {
            char t = c;
            c = b;
            b = t;
        }
        cout << a << ' ' << b << ' ' << c << endl;
    }
    return 0;
}