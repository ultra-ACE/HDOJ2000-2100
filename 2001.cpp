#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    float x1,y1,x2,y2;
    while (cin>>x1>>y1>>x2>>y2)
    {
        float d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        printf("%.2f\n",d);
    }
    return 0;
}