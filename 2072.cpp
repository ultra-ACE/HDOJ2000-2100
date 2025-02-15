#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        set<string> st;
        if (s[0] == '#')
        {
            break;
        }
        for (int i = 0; i < s.size(); i++)
        {
            string w = "";
            while (s[i] != ' ' && i < s.size())
            {
                w = w + s[i];
                i++;
            }
            if (w != "")
                st.insert(w);
        }
        cout << st.size() << endl;
    }
    return 0;
}