#include <cstdio>

int main()
{
    short m[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    short year, month, day;
    while (scanf("%hd/%hd/%hd", &year, &month, &day) == 3)
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            short ans = 0;
            for (int i = 1; i < month; i++)
            {
                ans += m[i];
            }
            if (month > 2)
                ans = ans + day + 1;
            else
                ans = ans + day;
            printf("%d\n", ans);
        }
        else
        {
            short ans = 0;
            for (int i = 1; i < month; i++)
            {
                ans += m[i];
            }
            ans = ans + day;
            printf("%d\n", ans);
        }
    }
    return 0;
}