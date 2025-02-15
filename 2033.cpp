#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int AH, AM, AS, BH, BM, BS;
        cin >> AH >> AM >> AS >> BH >> BM >> BS;
        int H, M, S, q, w;
        S = (AS + BS) % 60;
        q = (AS + BS) / 60;
        M = (AM + BM + q) % 60;
        w = (AM + BM + q) / 60;
        H = AH + BH + w;
        cout << H << ' ' << M << ' ' << S << endl;
    }
    return 0;
}