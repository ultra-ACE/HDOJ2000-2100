#include <iostream>

using namespace std;
int main()
{
    int rmb[6] = {100, 50, 10, 5, 2, 1};
    int counts[6];
    int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        int count = 0;
        for (int index = 0; index < n; index++)
        {
            int money;
            cin >> money;
            for (int i = 0; i < 6; i++)
            {
                counts[i] = money / rmb[i];
                if (counts[i] != 0)
                    money = money % rmb[i];
                count += counts[i];
            }
        }
        cout << count << endl;
    }
    return 0;
}