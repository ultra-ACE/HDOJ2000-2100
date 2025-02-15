#include <iostream>

using namespace std;

int main()
{
    int n;
    int h[52] = {0};
    while (cin >> n)
    {
        if (n == 0)
            break;
        int sum = 0, step = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
            sum += h[i];
        }
        int avg = sum / n;
        for (int i = 0; i < n; i++)
        {
            if (avg > h[i])
            {
                step += avg - h[i];
            }
        }
        cout << step << endl;
    }
    return 0;
}