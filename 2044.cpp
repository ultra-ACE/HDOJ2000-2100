#include <iostream>

using namespace std;
long long path[52] = {0};

int main()
{
    path[2] = 1;
    path[3] = 2;
    for (int i = 4; i < 52; i++)
    {
        path[i] = path[i - 2] + path[i - 1];
    }
    long long N;
    cin >> N;
    while (N--)
    {
        int a, b;
        cin >> a >> b;
        cout << path[b - a + 1] << endl;
    }
    return 0;
}