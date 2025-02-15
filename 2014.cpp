#include <cstdio>

int main()
{
    short n;
    while (scanf("%hd", &n) == 1)
    {
        short max = -1, min = -1;
        short t;
        float ans = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%hd", &t);
            if (max < 0 && min < 0)
            {
                max = t;
                min = t;
            }
            if (t > max)
            {
                max = t;
            }
            else if (t < min)
            {
                min = t;
            }
            ans += t;
        }
        ans = ans - max - min;
        printf("%.2f\n", ans / (n - 2));
    }
    return 0;
}