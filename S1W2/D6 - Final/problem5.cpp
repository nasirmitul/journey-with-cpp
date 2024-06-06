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
};

bool cmp(Student a, Student b)
{
    if (a.engMark != b.engMark)
    {
        return a.engMark > b.engMark;
    }
    else if (a.mathMark != b.mathMark)
    {
        return a.mathMark > b.mathMark;
    }
    else
    {
        return a.id < b.id;
    }
}

int main()
{
    int n;
    cin >> n;
    Student ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].studentClass >> ar[i].section >> ar[i].id >> ar[i].mathMark >> ar[i].engMark;
    }

    sort(ar, ar + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].studentClass << " " << ar[i].section << " " << ar[i].id << " " << ar[i].mathMark << " " << ar[i].engMark << endl;
    }

    return 0;
}
