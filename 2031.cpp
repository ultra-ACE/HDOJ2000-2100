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
    int N, R;
    while (cin >> N >> R)
    {
        bool flag = false; // 判断正负
        if (N < 0)
        {
            flag = true;
            N = abs(N);
        }
        if (N == 0)
        {
            cout << 0 << endl;
            continue;
        }
        string s = getC(N, R);
        if (flag)
        {
            cout << '-' << s << endl;
            continue;
        }
        cout << s << endl;
    }
    return 0;
}