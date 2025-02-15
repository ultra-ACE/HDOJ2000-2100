#include<cstdio>

int main()
{
    double a;
    while(scanf("%lf",&a)==1)
    {
        if(a>0)
        {
            printf("%.2f",a);
        }
        else{
            a=-a;
            printf("%.2f\n",a);
        }
    }
    return 0;
}