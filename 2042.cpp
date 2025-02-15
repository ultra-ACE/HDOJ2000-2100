#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int ans[31] = {0};
    ans[0] = 3;
    for (int i = 1; i <= 30; i++)
    {
        ans[i] = (ans[i - 1] - 1) * 2;
    }
    while (N--)
    {
        int a;
        cin >> a;
        cout << ans[a] << endl;
    }
    return 0;
}