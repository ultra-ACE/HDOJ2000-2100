#include <iostream>

using namespace std;

int main()
{
    int A, B;
    int n;
    cin >> n;
    while (n--)
    {
        cin >> A >> B;
        if (A < B || B == 0 || A % B != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}