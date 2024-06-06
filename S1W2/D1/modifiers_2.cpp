#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "Hello";
    a.assign("HELLO");

    // erase
    string s = "Hello_World";
    s.erase(5, 1);
    cout << s << endl
        << endl;

    // replace
    string s1 = "Hello";
    s1.replace(0, 1, "G");
    cout << s1 << endl
        << endl;

    // insert
    string s2 = "Hello";
    s2.insert(5, "Mitul");
    cout << s2 << endl
        << endl;

    return 0;
}