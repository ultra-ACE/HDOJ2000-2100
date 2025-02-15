#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        float A, B, C;
        cin >> A >> B >> C;
        if ((A + B <= C) || (A + C <= B) || (B + C <= A))
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