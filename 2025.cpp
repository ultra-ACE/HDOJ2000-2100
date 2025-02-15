#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        char max = s[0];
        for (unsigned long i = 1; i < s.size(); i++)
        {
            if (max - 'A' < s[i] - 'A')
            {
                max = s[i];
            }
        }
        for (unsigned long i = 0; i < s.size(); i++)
        {
            if (s[i] == max && i != s.size() - 1)
            {
                string s1 = s.substr(0, i + 1);
                string s2 = s.substr(i + 1);
                s = s1 + "(max)" + s2;
                i += 5;
            }
            else if (s[i] == max && i == s.size() - 1)
            {
                s = s + "(max)";
                break;
            }
        }
        cout << s << endl;
    }
    return 0;
}