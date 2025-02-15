#include <iostream>

using namespace std;

int main()
{
    long long s[10002] = {0};
    s[1] = 2;
    s[2] = 7;
    for (int i = 3; i < 10002; i++)
    {
        s[i] = s[i - 1] + 4 * (i - 1) + 1;
    }
    int C;
    cin >> C;
    while (C--)
    {
        int n;
        cin >> n;
        cout << s[n] << endl;
    }
    return 0;
}