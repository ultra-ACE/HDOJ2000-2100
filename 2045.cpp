#include <iostream>

using namespace std;

int main()
{
    long long RPG[52] = {0};
    RPG[1] = 3;
    RPG[2] = 6;
    RPG[3] = 6;
    for (int i = 4; i < 52; i++)
    {
        RPG[i] = RPG[i - 1] + 2 * RPG[i - 2];
    }
    int n;
    while (cin >> n)
    {
        cout << RPG[n] << endl;
    }
    return 0;
}