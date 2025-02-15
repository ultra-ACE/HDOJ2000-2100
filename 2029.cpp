#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int T = 0; T < n; T++)
    {
        string s;
        bool flag = false;
        getline(cin, s);
        int i = 0, j = s.size() - 1;
        while (i < j)
        {
            if (s[i] == s[j])
            {
                i++;
                j--;
            }
            else
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
    return 0;
}