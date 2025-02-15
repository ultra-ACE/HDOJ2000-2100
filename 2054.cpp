#include <iostream>
#include <string>

using namespace std;

int main()
{
    string A, B;
    while (cin >> A >> B)
    {
        if ((A[0] == '-' && B[0] != '-') || (A[0] != '-' && B[0] == '-'))
        {
            cout << "NO" << endl;
            continue;
        }
        bool flag = false;
        int pointA = 0, pointB = 0;
        int NZA, NZB;
        if (A[0] != '-' && B[0] != '-')
        {
            NZA = 0;
            NZB = 0;
        }
        else
        {
            NZA = 1;
            NZB = 1;
        }
        for (int i = NZA; i < A.size(); i++)
        {
            if (A[i] == '.')
            {
                pointA = i;
                NZA = i - 1;
                break;
            }
            if (A[i] != '0')
            {
                NZA = i;
                break;
            }
        }
        for (int i = NZB; i < B.size(); i++)
        {
            if (B[i] == '.')
            {
                pointB = i;
                NZB = i - 1;
                break;
            }
            if (B[i] != '0')
            {
                NZB = i;
                break;
            }
        }
        int i = NZA, j = NZB;
        while (i < A.size() && j < B.size())
        {
            if (A[i] == '.' || B[j] == '.')
            {
                pointA = i;
                pointB = j;
            }
            if (A[i] == B[j])
            {
                i++;
                j++;
            }
            else
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
            continue;
        }
        if (i != A.size())
        {
            if (A[i] == '.')
                pointA = i;
            if (pointA == 0)
            {
                cout << "NO" << endl;
                continue;
            }
            if (A[i] == '.')
            {
                for (i = i + 1; i < A.size(); i++)
                {
                    if (A[i] != '0')
                    {
                        flag = true;
                        break;
                    }
                }
            }
            else
            {
                for (; i < A.size(); i++)
                {
                    if (A[i] != '0')
                    {
                        flag = true;
                        break;
                    }
                }
            }
            if (flag)
            {
                cout << "NO" << endl;
                continue;
            }
        }
        else if (j != B.size())
        {
            if (B[j] == '.')
                pointB = j;
            if (pointB == 0)
            {
                cout << "NO" << endl;
                continue;
            }
            if (B[j] == '.')
            {
                for (j = j + 1; j < B.size(); j++)
                {
                    if (B[j] != '0')
                    {
                        flag = true;
                        break;
                    }
                }
            }
            else
            {
                for (; j < B.size(); j++)
                {
                    if (B[j] != '0')
                    {
                        flag = true;
                        break;
                    }
                }
            }
            if (flag)
            {
                cout << "NO" << endl;
                continue;
            }
        }
        cout << "YES" << endl;
    }
    return 0;
}