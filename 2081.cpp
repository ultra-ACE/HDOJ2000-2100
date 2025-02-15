#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        string s;
        cin >> s;
        string ans = "6";
        for (int i = 6; i < s.size(); i++)
        {
            ans += s[i];
        }
        cout << ans << endl;
    }
    return 0;
}