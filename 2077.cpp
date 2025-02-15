#include <iostream>

using namespace std;

int main()
{
    long long num[21] = {0};
    num[1] = 2;
    num[2] = 4;
    for (int i = 3; i <= 20; i++)
    {
        num[i] = 3 * num[i - 1] - 2;
    }
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        cout << num[n] << endl;
    }
    return 0;
}