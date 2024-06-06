#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int studentClass;
    char section;
    int id;
    int mathMark;
    int engMark;
    int totalMark;
};

bool cmp(Student a, Student b)
{
    if (a.totalMark != b.totalMark)
        return a.totalMark > b.totalMark;
    else
        return a.id < b.id;
}

int main()
{
    int n;
    cin >> n;

    Student ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].studentClass >> ar[i].section >> ar[i].id >> ar[i].mathMark >> ar[i].engMark;
        ar[i].totalMark = ar[i].mathMark + ar[i].engMark;
    }

    sort(ar, ar + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].studentClass << " " << ar[i].section << " " << ar[i].id << " " << ar[i].mathMark << " " << ar[i].engMark << endl;
    }

    return 0;
}
