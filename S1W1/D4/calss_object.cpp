#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[1000];
    int roll;
    double cgpa;
};

int main()
{
    Student a, b;
    cin.getline(a.name, 1000);
    cin >> a.roll >> a.cgpa;
    getchar();
    cin.getline(b.name, 1000);
    cin >> b.roll >> b.cgpa;

    // a.roll = 29;
    // a.cgpa = 2.23;
    // char tmp[1000] = "rakib";
    // strcpy(a.name, tmp);

    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    cout << b.name << " " << b.roll << " " << b.cgpa << endl;

    return 0;
}