#include <iostream>

using namespace std;

int nums[20] = {20, 72, 72, 56, 60, 12, 92, 56, 0, 52, 12, 56, 40, 92,
                32, 56, 80, 32, 52, 56};

int main()
{
    int T;
    while (cin >> T)
    {
        if (T == 0)
        {
            break;
        }
        unsigned long long N;
        for (int i = 1; i <= T; i++)
        {
            int ans;
            cin >> N;
            if (N == 1)
                ans = 2;
            else if (N == 2)
                ans = 6;
            else
                ans = nums[(N - 3) % 20];
            cout << "Case " << i << ": " << ans << endl;
        }
        cout << endl;
    }
    return 0;
}
