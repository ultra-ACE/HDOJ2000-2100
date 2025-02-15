#include <iostream>

using namespace std;

int main()
{
    int f[26] = {0};
    int F[26] = {0};
    int Count = 1, count = -1;
    for (int i = 0; i < 26; i++)
    {
        f[i] = count;
        F[i] = Count;
        count--;
        Count++;
    }
    int T;
    cin >> T;
    while (T--)
    {
        char x;
        int y;
        cin >> x >> y;
        if (x - 'a' >= 0)
        {
            cout << f[x - 'a'] + y << endl;
        }
        else
        {
            cout << F[x - 'A'] + y << endl;
        }
    }
    return 0;
}