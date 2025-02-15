#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int a, b;
    stringstream ss;
    string s, temp;
    while (cin >> a >> b)
    {
        if (!a && !b)
        {
            break;
        }
        a = a * 100;
        for (int i = 0; i < 100; i++)
        {
            if ((a + i) % b == 0)
            {
                ss << a + i;
                ss >> temp;
                s = temp.substr(temp.size() - 2, 2);
                ss.clear();
                cout << s << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}