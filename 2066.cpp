#include <iostream>

using namespace std;

#define INF 0x3f3f3f3f;

int map[1010][1010];
int visited[1010];
int dist[1010];
int source[1010];
int target[1010];

void dijkstra(int u)
{
    int i, j;
    int pos = u;
    memset(visited, 0, sizeof(visited));
    for (i = 1; i < 1010; i++)
    {
        dist[i] = map[u][i];
    }
    visited[u] = 1;
    dist[u] = 0;
    for (i = 1; i < 1010; i++)
    {
        int m = INF;
        for (j = 1; j < 1010; j++)
        {
            if (!visited[j] && dist[j] < m) // 更新dist
            {
                m = dist[j];
                pos = j;
            }
        }
        if (m == 0x3f3f3f3f)
        {
            return ;
        }
        visited[pos] = 1;
        for (j = 1; j < 1010; j++)
        {
            if (!visited[j] && dist[j] > map[pos][j] + dist[pos])
            {
                dist[j] = map[pos][j] + dist[pos];
            }
        }
    }
}

int main()
{

    int T, S, D;
    int a, b, time;
    while (cin >> T >> S >> D)
    {
        int ans = INF;
        for (int i = 1; i < 1010; i++)
        {
            for (int j = 1; j < 1010; j++)
            {
                map[i][j] = INF;
            }
        }

        for (int i = 0; i < T; i++)
        {
            cin >> a >> b >> time;
            if (time < map[a][b])
            {
                map[a][b] = time;
                map[b][a] = time;
            }
        }
        for (int i = 0; i < S; i++)
        {
            cin >> source[i];
        }
        for (int i = 0; i < D; i++)
        {
            cin >> target[i];
        }
        for (int i = 0; i < S; i++)
        {
            dijkstra(source[i]);
            for (int j = 0; j < D; j++)
            {
                if (dist[target[j]] < ans)
                {
                    ans = dist[target[j]];
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}