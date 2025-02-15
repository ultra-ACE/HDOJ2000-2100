#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    long long A, B;
    while (cin >> hex >> A >> B)
    {
        long long C = A + B;
        if (C < 0)
        {
            cout << '-' << hex << uppercase << -C << endl;
            continue;
        }
        cout << hex << uppercase << C << endl;
    }
    return 0;
}