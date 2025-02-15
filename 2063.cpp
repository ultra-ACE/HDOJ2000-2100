#include <iostream>

using namespace std;

int p[501][501] = {0};
int mark[501] = {0};
int boy[501] = {0};

int find(int n, int N)
{
    int i;
    for (i = 1; i <= N; i++)
    {
        if (p[n][i] == 1 && mark[i] == 0)
        {
            mark[i] = 1;
            if (boy[i] == 0 || find(boy[i], N) == 1)
            {
                boy[i] = n;
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int K;
    while (cin >> K)
    {
        if (K == 0)
        {
            break;
        }
        int M, N;
        cin >> M >> N;
        for (int i = 0; i < 501; i++)
        {
            for (int j = 0; j < 501; j++)
            {
                p[i][j] = 0;
            }
        }
        memset(boy, 0, sizeof(boy));
        int count = 0;
        while (K--)
        {
            int i, j;
            cin >> i >> j;
            p[i][j] = 1;
        }
        for (int i = 1; i <= M; i++)
        {
            memset(mark, 0, sizeof(mark));
            if (find(i, N) == 1)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}