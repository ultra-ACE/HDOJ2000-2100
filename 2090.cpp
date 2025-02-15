#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
    double sum = 0;
    string s;
    while (cin >> s)
    {
        double num, price;
        cin >> num >> price;
        sum += num * price;
    }
    printf("%.1lf", sum);
    return 0;
}