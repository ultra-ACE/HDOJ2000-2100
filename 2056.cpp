#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    float x[4], y[4];
    while (scanf("%f%f%f%f%f%f%f%f", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &x[3], &y[3]) == 8)
    {
        double ans = 0;
        sort(x, x + 2);
        sort(x + 2, x + 4);
        sort(y, y + 2);
        sort(y + 2, y + 4);
        double x1 = max(x[0], x[2]);
        double y1 = max(y[0], y[2]);
        double x2 = min(x[1], x[3]);
        double y2 = min(y[1], y[3]);
        if (x1 > x2 || y1 > y2)
        {
            printf("%.2f\n", ans);
            continue;
        }
        ans = (x1 - x2) * (y1 - y2);
        printf("%.2f\n", ans);
    }
    return 0;
}