#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;
    while (cin >> N >> M)
    {
        if (N == 0 && M == 0)
        {
            break;
        }
        int len = (int)sqrt(2 * M);
        for (; len >= 1; len--)
        {
            int i = ((2 * M) / len + 1 - len) / 2;
            int j = i + len - 1;
            if ((i + j) * len / 2 == M)
            {
                cout << '[' << i << ',' << j << ']' << endl;
            }
        }
        cout << '\n';
    }
    return 0;
}