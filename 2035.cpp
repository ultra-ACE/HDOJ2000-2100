#include <iostream>

using namespace std;

int quickpow(int base, int power)
{
    int result = 1;
    while (power > 0)
    {
        if (power & 1)
        {
            result = result * base % 1000;
        }
        base = base * base % 1000;
        power >>= 1;
    }
    return result % 1000;
}

int main()
{
    int A, B;
    while (cin >> A >> B)
    {
        if (A == 0 && B == 0)
            break;
        int ans = quickpow(A, B);
        cout << ans << endl;
    }
    return 0;
}