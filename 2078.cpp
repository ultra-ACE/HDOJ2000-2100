#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        int *a = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int ans = pow(100 - a[0], 2);
        for (int i = 1; i < m; i++)
        {
            int t = pow(a[i] - a[i - 1], 2);
            if (ans < t)
                ans = t;
        }
        cout << ans << endl;
        delete []a;
    }
    return 0;
}