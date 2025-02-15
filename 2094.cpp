#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        string win, loss;
        set<string> sum, w;
        for (int i = 0; i < n; i++)
        {
            cin >> win >> loss;
            sum.insert(win);
            sum.insert(loss);
            w.insert(loss);
        }
        if (sum.size() - w.size() != 1)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}