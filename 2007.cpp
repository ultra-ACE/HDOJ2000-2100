#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        if(x>y)
        {
            int t=y;
            y=x;
            x=t;
        }
        int ans1=0,ans2=0;
        for(int i=x;i<=y;i++)
        {
            if(i%2==0)
            {
                ans1=ans1+pow(i,2);
            }
            else
            {
                ans2=ans2+pow(i,3);
            }
        }
        cout<<ans1<<' '<<ans2<<endl;
    }
    return 0;
}