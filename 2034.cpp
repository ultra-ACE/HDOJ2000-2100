#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
        {
            break;
        }
        int *A = new int[n];
        int *B = new int[m];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> B[i];
        }
        sort(A, A + n);
        sort(B, B + m);
        int i = 0, j = 0;
        bool flag = false;
        while (i < n && j < m)
        {
            if (A[i] == B[j])
            {
                i++;
                j++;
            }
            else if (A[i] > B[j])
            {
                j++;
            }
            else
            {
                flag = true;
                cout << A[i] << ' ';
                i++;
            }
        }
        while (i < n)
        {
            flag = true;
            cout << A[i++] << ' ';
        }
        if (flag)
        {
            cout << '\n';
            continue;
        }
        cout << "NULL" << endl;
    }
    return 0;
}