#include <iostream>

using namespace std;

long long getC(int n, int m)
{
    if (n == m || m == 0)
        return 1;
    return getC(n - 1, m - 1) + getC(n - 1, m);
}

int main()
{
    long long wrong[22] = {0};
    wrong[2] = 1;
    wrong[3] = 2;
    for (int i = 4; i < 22; i++)
    {
        wrong[i] = (i - 1) * (wrong[i - 1] + wrong[i - 2]);
    }
    int C;
    cin >> C;
    while (C--)
    {
        int N, M;
        cin >> N >> M;
        cout << getC(N, N - M) * wrong[M] << endl;
    }
    return 0;
}