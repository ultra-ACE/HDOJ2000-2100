#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int T;
    int h, m, s;
    cin >> T;
    while (T--)
    {
        cin >> h >> m >> s;
        h = h % 12;
        double hour_temp = (m * 60 + s) / 120.0;
        double min_temp = s / 10.0;
        double hour_ang = h * 30 + hour_temp;
        double min_ang = m * 6 + min_temp;
        double res = abs(hour_ang - min_ang);
        if (res > 180)
        {
            res = 360 - res;
        }
        cout << (int)res << endl;
    }
    return 0;
}