#include <iostream>
#include <algorithm>

using namespace std;

typedef struct TV
{
    int start;
    int end;
} TV;

bool cmp(TV e1, TV e2)
{
    return e1.end < e2.end;
}

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        TV *tvs = new TV[n];
        for (int i = 0; i < n; i++)
        {
            cin >> tvs[i].start >> tvs[i].end;
        }
        sort(tvs, tvs + n, cmp);
        int count = 0, end = 0;
        for (int i = 0; i < n; i++)
        {
            if (tvs[i].start < end)
            {
                continue;
            }
            count++;
            end = tvs[i].end;
        }
        cout << count << endl;
    }
    return 0;
}