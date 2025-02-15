#include<iostream>

using namespace std;
short d[10]={0,1,8,27,64,125,216,343,512,729};
int main()
{
    short left,right;
    while(cin>>left>>right)
    {
        short a,b,c;
        short flag=0;
        for(short i=left;i<=right;i++)
        {
            a=i/100;b=i/10%10;c=i%10;
            if(d[a]+d[b]+d[c]==i)
            {
                flag=1;
                cout<<i<<' ';
            }
        }
        if(flag==0)
        {
            cout<<"no";
        }
        cout<<'\n';
    }
    return 0;
}