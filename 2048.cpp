#include <cstdio>

float getA(int a)
{
    float ans = 1;
    for (int i = 1; i <= a; i++)
    {
        ans *= i;
    }
    return ans;
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
    scanf("%d", &C);
    while (C--)
    {
        int n;
        scanf("%d", &n);
        double ans = (wrong[n] / getA(n)) * 100;
        printf("%.2f%%\n", ans);
    }
    return 0;
}