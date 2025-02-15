#include<cstdio>
#include<cmath>

int main()
{
    short m;
    scanf("%hd",&m);
    for(int i=0;i<m;i++)
    {
        short n;
        float ans=0;
        scanf("%hd",&n);
        for(float j=0;j<n;j++)
        {
            ans+=(1/(j+1))*pow(-1,j);
        }
        printf("%.2f\n",ans);
    }
    return 0;
}