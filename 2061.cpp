#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

typedef struct course
{
    string name;
    float credit;
    float score;
} course;

int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        int K;
        cin >> K;
        bool flag = false;
        course *cs = new course[K];
        for (int i = 0; i < K; i++)
        {
            cin >> cs[i].name;
            cin >> cs[i].credit;
            cin >> cs[i].score;
            if (cs[i].score < 60)
            {
                flag = true;
            }
        }
        if (flag)
        {
            cout << "Sorry!" << endl;
            continue;
        }
        float C = 0, CS = 0;
        for (int i = 0; i < K; i++)
        {
            CS += (cs[i].credit * cs[i].score);
            C += cs[i].credit;
        }
        float ans = CS / C;
        printf("%.2f\n", ans);
    }
    return 0;
}