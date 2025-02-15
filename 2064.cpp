#include <iostream>

using namespace std;

int main()
{
    int N;
    long long num[36] = {0};
    num[1] = 2;
    for (int i = 2; i < 36; i++)
    {
        num[i] = num[i - 1] * 3 + 2;
    }
    while (cin >> N)
    {
        cout << num[N] << endl;
    }
    return 0;
}