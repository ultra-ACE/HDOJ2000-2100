#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        int bl, ps, os;
        cin >> bl >> ps >> os;
        int red = 0;
        if (bl > 6)
        {
            red = bl - 6;
        }
        ps = ps + red + red * 7;
        bl = bl - red;
        int score = 7;
        for (int i = 0; i < bl; i++)
        {
            ps = ps + score;
            score--;
        }
        if (ps >= os)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}