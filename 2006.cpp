#include<iostream>

using namespace std;

int main()
{
    int n;
    while (cin>>n)
    {
        long long ans=1;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a%2!=0)
            {
                ans*=a;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}