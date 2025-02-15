#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int A, B;
        cin >> A >> B;
        int ansA = 1, ansB = 1;
        for (int i = 2; i < sqrt(A); i++)
        {
            if (A % i == 0)
                ansA += i + (A / i);
        }
        for (int i = 2; i < sqrt(B); i++)
        {
            if (B % i == 0)
                ansB += i + (B / i);
        }
        if (ansA == B && ansB == A)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}