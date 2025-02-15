#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0) break;
        int *d=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>d[i];
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(abs(d[j])<abs(d[j+1]))
                {
                    int t=d[j+1];
                    d[j+1]=d[j];
                    d[j]=t;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<d[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}