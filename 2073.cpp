#include <cstdio>
#include <cmath>

double distance(int x, int y)
{
    double ans = 0;
    double t = sqrt(2);
    for (int i = 1; i < x + y; i++)
    {
        ans += t * i;
    }
    ans += t * x;
    for (int i = 0; i < x + y; i++)
    {
        ans += sqrt(pow(i, 2) + pow(i + 1, 2));
    }
    return ans;
}

int main()
{
    int N;
    scanf("%d", &N);
    while (N--)
    {
        int x1, y1, x2, y2;
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        double ans = abs(distance(x1, y1) - distance(x2, y2));
        printf("%.3lf\n", ans);
    }
    return 0;
}