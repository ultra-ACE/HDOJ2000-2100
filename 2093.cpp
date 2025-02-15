#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

typedef struct student
{
    string name;
    int num;
    int score;
} student;

bool cmp(student s1, student s2)
{
    if (s1.num != s2.num)
    {
        return s1.num > s2.num;
    }
    else
    {
        return s1.score < s2.score;
    }
}

int main()
{
    student stu[1000];
    int n, m, temp, count = 0;
    cin >> n >> m;
    while (n < 1 || n > 12 || m < 10 || m > 20)
    {
        cin >> n >> m;
    }
    string s;
    string grade, add, less;
    stringstream ss;
    while (cin >> s)
    {
        stu[count].name = s;
        stu[count].num = stu[count].score = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> grade;
            int pos1 = grade.find('(');
            if (pos1 != -1)
            {
                stu[count].num++;
                int pos2 = grade.find(')');
                add = grade.substr(0, pos1);
                ss << add;
                ss >> temp;
                stu[count].score += temp;
                ss.clear();
                less = grade.substr(pos1 + 1, pos2 - pos1 - 1);
                ss << less;
                ss >> temp;
                stu[count].score += temp * m;
                ss.clear();
            }
            else if (grade[0] == '-' || grade == "0")
            {
                continue;
            }
            else
            {
                stu[count].num++;
                ss << grade;
                ss >> temp;
                stu[count].score += temp;
                ss.clear();
            }
        }
        count++;
    }
    sort(stu, stu + count, cmp);
    for (int i = 0; i < count; i++)
    {
        cout.flags(ios::left);
        cout << setw(10) << stu[i].name << " ";
        cout.flags(ios::right);
        cout << setw(2) << stu[i].num << ' ';
        cout.flags(ios::right);
        cout << setw(4) << stu[i].score << endl;
    }
    return 0;
}