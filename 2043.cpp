#include <iostream>
#include <string>

using namespace std;

int main()
{
    int M;
    cin >> M;
    while (M--)
    {
        string s;
        cin >> s;
        if (s.size() < 8 || s.size() > 16)
        {
            cout << "NO" << endl;
            continue;
        }
        int a[4] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] - 'A' >= 0 && s[i] - 'Z' <= 0)
            {
                a[0] = 1;
            }
            else if (s[i] - 'a' >= 0 && s[i] - 'z' <= 0)
            {
                a[1] = 1;
            }
            else if (s[i] - '0' >= 0 && s[i] - '9' <= 0)
            {
                a[2] = 1;
            }
            else
            {
                a[3] = 1;
            }
        }
        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            if (a[i] == 1)
                count++;
        }
        if (count >= 3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}