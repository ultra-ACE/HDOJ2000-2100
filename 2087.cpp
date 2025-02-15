#include <iostream>
#include <string>

using namespace std;

int nextT[1002];

void creatNext(string pattern)
{
    int j = 0;
    nextT[j] = -1;
    int i = 0;
    while (j < pattern.size())
    {
        if (i == -1 || pattern[j] == pattern[i])
        {
            i++;
            j++;
            if (pattern[i] != pattern[j])
            {
                nextT[j] = i;
            }
            else
            {
                nextT[j] = nextT[i];
            }
        }
        else
        {
            i = nextT[i];
        }
    }
}

int kmp(string text, string pattern)
{
    creatNext(pattern);
    int i = 0, j = 0, ans = 0;
    while (i < text.size())
    {
        if (j == -1 || text[i] == pattern[j])
        {
            i++;
            j++;
        }
        else
        {
            j = nextT[j];
        }
        if (j == pattern.size())
        {
            ans++;
            j = 0;
        }
    }
    return ans;
}

int main()
{
    string s;
    string text, pattern;
    while (cin >> text)
    {
        if (text[0] == '#')
        {
            break;
        }
        cin >> pattern;
        int ans = kmp(text, pattern);
        cout << ans << endl;
    }
    return 0;
}