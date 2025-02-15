#include <iostream>

using namespace std;

int main()
{
    int A, B, C, n;
    cin >> n;
    while (n--)
    {
        cin >> A >> B;
        A = A % 100;
        B = B % 100;
        C = A + B;
        C = C % 100;
        cout << C << endl;
    }
    return 0;
}