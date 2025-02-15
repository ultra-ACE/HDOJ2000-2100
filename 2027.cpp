#include <iostream>
#include <string>

using namespace std;

int main()
{
    int count[5];
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string s;
        for (int j = 0; j < 5; j++)
        {
            count[j] = 0;
        }
        getline(cin, s);
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == 'a')
            {
                ++count[0];
            }
            else if (s[j] == 'e')
            {
                ++count[1];
            }
            else if (s[j] == 'i')
            {
                ++count[2];
            }
            else if (s[j] == 'o')
            {
                ++count[3];
            }
            else if (s[j] == 'u')
            {
                ++count[4];
            }
        }
        cout << "a:" << count[0] << '\n'
             << "e:" << count[1] << '\n';
        cout << "i:" << count[2] << '\n'
             << "o:" << count[3] << '\n';
        cout << "u:" << count[4] << '\n';
        if (i != n - 1)
            cout << '\n';
    }
    return 0;
}