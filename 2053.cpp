#include <iostream>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int condition = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
                condition = !condition;
        }
        cout << condition << endl;
    }
    return 0;
}