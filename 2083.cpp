#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int M;
    cin >> M;
    while (M--)
    {
        int N;
        cin >> N;
        int *a = new int[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        sort(a, a + N);
        int l = N / 2;
        bool flag;
        if (N % 2 == 0)
            flag = true;
        int ans1 = 0, ans2 = 0;
        for (int i = 0; i < N; i++)
        {
            ans1 += abs(a[i] - a[l]);
            if (flag)
                ans2 += abs(a[i] - a[l + 1]);
        }
        if (flag)
            cout << min(ans1, ans2) << endl;
        else
            cout << ans1 << endl;
        delete[] a;
    }
    return 0;
}