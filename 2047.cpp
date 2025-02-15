#include <iostream>

using namespace std;

int main()
{
    long long f[42] = {0};
    f[1] = 3;
    f[2] = 8;
    for (int i = 3; i < 42; i++)
    {
        f[i] = 2 * f[i - 2] + 2 * f[i - 1];
    }
    int n;
    while (cin >> n)
    {
        cout << f[n] << endl;
    }
    return 0;
}