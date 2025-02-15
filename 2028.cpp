#include <iostream>
#include<algorithm>

typedef long long ll;

using namespace std;

ll gcd(ll x, ll y)
{
    if (x < y)
    {
        ll t = x;
        x = y;
        y = t;
    }
    ll r = x % y;
    while (r)
    {
        x = y;
        y = r;
        r = x % y;
    }
    return y;
}

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            continue;
        ll *d = new ll[n];
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }
        if (n == 1)
        {
            cout << d[0] << endl;
            continue;
        }
        ll g = gcd(d[0], d[1]);
        ll l = d[0] * d[1] / g;
        for (int i = 2; i < n; i++)
        {
            g = gcd(l, d[i]);
            l = d[i] * l / g;
        }
        cout << l << endl;
    }
    return 0;
}