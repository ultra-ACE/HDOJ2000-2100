#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        int count=0;
        for(unsigned long j=0;j<s.size();j++)
        {
            if(s[j]-'0'>=0&&s[j]-'0'<=9)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}