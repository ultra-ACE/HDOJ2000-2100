#include <cstdio>
#include <cstring>

float A[3003];
float C[3003];

int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        double sumc = 0;
        memset(A, 0, sizeof(A));
        memset(C, 0, sizeof(C));
        scanf("%f", &A[0]);
        scanf("%f", &A[n + 1]);
        for (int i = 1; i <= n; i++)
        {
            scanf("%f", &C[i]);
            sumc += (n - i + 1) * C[i];
        }
        A[1] = (n * A[0] + A[n + 1] - 2 * sumc) / (n + 1);
        printf("%.2f\n", A[1]);
    }
    return 0;
}