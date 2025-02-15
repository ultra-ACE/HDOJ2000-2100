#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
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
    int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        int sum = 0;
        for (int i = 2; i < n / 2; i++)
        {
            if (isPrime(i) && isPrime(n - i))
            {
                sum++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}