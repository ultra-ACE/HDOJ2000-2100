#include<cstdio>
#include<cmath>

int main()
{
    short n;
    while(scanf("%hd",&n)==1)
    {
        short m;
        scanf("%hd",&m);
        float ans=0,t=n;
        for(short i=0;i<m;i++)
        {
            ans+=t;
            t=sqrt(t);
        }
        printf("%.2f",ans);
    }
    return 0;
}