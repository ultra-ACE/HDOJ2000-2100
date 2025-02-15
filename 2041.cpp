#include <iostream>

using namespace std;

int stage[42] = {0};

int main()
{
    int N;
    cin >> N;
    stage[2] = 1;
    stage[3] = 2;
    for (int i = 4; i <= 41; i++)
    {
        stage[i] = stage[i - 2] + stage[i - 1];
    }
    while (N--)
    {
        int M;
        cin >> M;
        cout << stage[M] << endl;
    }
    return 0;
}