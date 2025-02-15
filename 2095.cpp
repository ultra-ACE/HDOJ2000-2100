#include <cstdio>

int main()
{
    int n, answer, a;
    while (scanf("%d", &n) == 1)
    {
        if (n == 0)
        {
            break;
        }
        answer = 0;
        while (n--)
        {
            scanf("%d", &a);
            answer = answer ^ a;
        }
        printf("%d\n", answer);
    }
    return 0;
}