#include <iostream>
#include <string>

using namespace std;

char two[2] = {'0', '1'};

string getS(int n)
{
    if (n == 0)
        return "";
    int r = n % 2;
    return getS(n / 2) + two[r];
}

int main()
{
    int n;
    while (cin >> n)
    {
        bool flag = false;
        if (n < 0)
        {
            n = -n;
            flag = true;
        }
        string s = getS(n);
        if (flag)
            cout << "-" << s << endl;
        else
            cout << s << endl;
    }
    return 0;
}