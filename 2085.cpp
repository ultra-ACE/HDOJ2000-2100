#include <iostream>

using namespace std;

int main()
{
    int n;
    long long low[34] = {0};
    long long high[34] = {0};
    high[0] = 1;
    for (int i = 1; i < 34; i++)
    {
        high[i] = 3 * high[i - 1] + 2 * low[i - 1];
        low[i] = high[i - 1] + low[i - 1];
    }
    while (cin >> n)
    {
        if (n == -1)
        {
            break;
        }
        cout << high[n] << ", " << low[n] << endl;
    }
    return 0;
}