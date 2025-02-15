#include<iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        if(n<=4)
        {
            cout<<n<<endl;
            continue;
        }
        int *cows=new int[n];
        cows[0]=1;cows[1]=2;cows[2]=3;cows[3]=4;
        for(int i=4;i<n;i++)
        {
            cows[i]=cows[i-1]+cows[i-3];
        }
        cout<<cows[n-1]<<endl;
    }
    return 0;
}