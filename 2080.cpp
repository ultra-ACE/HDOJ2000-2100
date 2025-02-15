#include <cstdio>
#include <cmath>
#define PI 3.1415926

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        double x1, y1, x2, y2;
        scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
        double a = (x1 * x2) + (y1 * y2);
        double b = sqrt(x1 * x1 + y1 * y1) * sqrt(x2 * x2 + y2 * y2);
        double cost = a / b;
        double ans = acos(cost);
        printf("%.2f\n", ans * 180 / PI);
    }
    return 0;
}