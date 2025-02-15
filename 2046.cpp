#include <iostream>

using namespace std;

int main()
{
    long long m[52] = {0};
    m[1] = 1;
    m[2] = 2;
    for (int i = 3; i < 52; i++)
    {
        m[i] = m[i - 1] + m[i - 2];
    }
    int n;
    while (cin >> n)
    {
        cout << m[n] << endl;
    }
    return 0;
}