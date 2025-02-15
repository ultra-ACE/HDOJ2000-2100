#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
    if (n <= 3)
    {
        return n > 1;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    short x, y;
    while (cin >> x >> y)
    {
        if (x == 0 && y == 0)
        {
            break;
        }
        int flag = 1;
        for (int i = x; i <= y; i++)
        {
            if (!isPrime(pow(i, 2) + i + 41))
            {
                flag = 0;
                cout << "Sorry" << endl;
                break;
            }
        }
        if (flag == 1)
            cout << "OK" << endl;
    }
    return 0;
}