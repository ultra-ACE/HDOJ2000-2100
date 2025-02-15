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
        getline(cin, s);
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] < 0)
                count++;
        }
        cout << count / 2 << endl;    //utf汉字一个占3个字节，gbk占2字节
    }
    return 0;
}