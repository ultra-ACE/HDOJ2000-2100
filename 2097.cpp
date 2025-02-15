#include <iostream>
#include <string>

using namespace std;

char change[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                   'A', 'B', 'C', 'D', 'E', 'F'};

string getC(int N, int R)
{
    if (N == 0)
        return "";
    int q = N / R;
    int r = N % R;
    return getC(q, R) + change[r];
}

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        int sum = n / 1000 + n / 100 % 10 + n / 10 % 10 + n % 10;
        string sixteen = getC(n, 16);
        string twevel = getC(n, 12);
        int s1 = 0, s2 = 0;
        for (int i = 0; i < sixteen.size(); i++)
        {
            if (sixteen[i] - 'A' >= 0)
            {
                s1 += sixteen[i] - 'A' + 10;
            }
            else
            {
                s1 += sixteen[i] - '0';
            }
        }
        for (int i = 0; i < twevel.size(); i++)
        {
            if (twevel[i] - 'A' >= 0)
            {
                s2 += twevel[i] - 'A' + 10;
            }
            else
            {
                s2 += twevel[i] - '0';
            }
        }
        if (sum == s1 && sum == s2)
        {
            cout << n << " is a Sky Number." << endl;
        }
        else
        {
            cout << n << " is not a Sky Number." << endl;
        }
    }
    return 0;
}