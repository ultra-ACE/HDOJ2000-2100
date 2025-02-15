#include <iostream>
#include <string>
#include <cmath>

using namespace std;

char change[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
                   'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                   'V', 'W', 'X', 'Y', 'Z'};

int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        int i = a.size() - 1, j = b.size() - 1;
        int less = 0;
        string ans = "";
        while (i >= 0 && j >= 0)
        {
            int c = a[i] - 'A' + b[j] - 'A' + less;
            less = c / 26;
            ans = change[c % 26] + ans;
            i--;
            j--;
        }
        if (i < 0 && j >= 0)
        {
            while (j >= 0)
            {
                int c = b[j] - 'A' + less;
                less = c / 26;
                ans = change[c % 26] + ans;
                j--;
            }
        }
        else if (i >= 0 && j < 0)
        {
            while (i >= 0)
            {
                int c = a[i] - 'A' + less;
                less = c / 26;
                ans = change[c % 26] + ans;
                i--;
            }
        }
        ans = change[less] + ans;
        int k = 0;
        while (ans[k] == 'A')
        {
            k++;
        }
        for (; k < ans.size(); k++)
        {
            cout << ans[k];
        }
        cout << endl;
    }
    return 0;
}