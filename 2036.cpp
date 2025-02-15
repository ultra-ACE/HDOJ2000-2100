#include <cstdio>
#include <cmath>

int x[102] = {0};
int y[102] = {0};

int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        if (n == 0)
            break;
        for (int i = 0; i < n; i++)
        {
            scanf("%d%d", &x[i], &y[i]);
        }
        x[n] = x[0];
        y[n] = y[0];
        double S = 0;
        for (int i = 0; i < n; i++)
        {
            S = S + (x[i] * y[i + 1] - x[i + 1] * y[i]);
        }
        S = abs(S) / 2;
        printf("%.1f\n", S);
    }
    return 0;
}