#include <cstdio>

int main()
{
    int n, m;
    while (scanf("%d%d", &n, &m) == 2)
    {
        double *socal = new double[m];
        double *avg = new double[n];
        for (int i = 0; i < m; i++)
        {
            socal[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            avg[i] = 0;
        }
        int **stus = new int *[n];
        for (int i = 0; i < n; i++)
        {
            stus[i] = new int[m];
        }
        for (int i = 0; i < n; i++)
        {
            float avg_s = 0;
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &stus[i][j]);
                avg_s += stus[i][j];
                socal[j] += stus[i][j];
            }
            avg[i] = avg_s / m;
        }
        for (int j = 0; j < m; j++)
        {
            socal[j] = socal[j] / n;
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int flag = 0;
            for (int j = 0; j < m; j++)
            {
                if (stus[i][j] < socal[j])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
                continue;
            count++;
        }
        for (int i = 0; i < n; i++)
        {
            printf("%.2lf ", avg[i]);
        }
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            printf("%.2lf ", socal[j]);
        }
        printf("\n");
        printf("%d\n", count);
    }
    return 0;
}