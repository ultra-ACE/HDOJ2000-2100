#include<cstdio>
#include<cmath>

#define PI 3.1415927

int main()
{
    double r;
    while(scanf("%lf",&r)==1)
    {        
        double v=(4/3.0)*PI*pow(r,3);
        printf("%.3lf\n",v);
    }
    return 0;
}