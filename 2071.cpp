#include <cstdio>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        float h, ans = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%f", &h);
            if (h > ans)
                ans = h;
        }
        printf("%.2f\n", ans);
    }
    return 0;
}