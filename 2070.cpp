#include <iostream>

using namespace std;

long long f[52];

long long getF(int n)
{
    if (f[n] != 0 || n == 0)
    {
        return f[n];
    }
    f[n] = getF(n - 1) + getF(n - 2);
    return f[n];
}

int main()
{
    int n;
    memset(f, 0, sizeof(f));
    f[1] = 1;
    while (cin >> n)
    {
        if (n == -1)
        {
            break;
        }
        cout << getF(n) << endl;
    }
    return 0;
}