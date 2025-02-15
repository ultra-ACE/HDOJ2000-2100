#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        cin.ignore();
        string s;
        for (int i = 0; i < n; i++)
        {
            getline(cin, s);
            bool flag = false;
            if (((s[0] - 'A') < 0 || (s[0] - 'Z') > 0) && ((s[0] - 'a') < 0 || (s[0] - 'z') > 0) && (s[0] - '_' != 0))
            {
                cout << "no" << endl;
                continue;
            }
            for (unsigned long j = 1; j < s.size(); j++)
            {
                if (((s[j] - 'A') < 0 || (s[j] - 'Z') > 0) && ((s[j] - 'a') < 0 || (s[j] - 'z') > 0) && (s[j] - '_' != 0) && ((s[j] - '0') < 0 || (s[j] - '9' > 0)))
                {
                    cout << "no" << endl;
                    flag = true;
                    break;
                }
            }
            if (flag)
                continue;
            cout << "yes" << endl;
        }
    }
    return 0;
}