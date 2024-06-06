#include <bits/stdc++.h>
using namespace std;
int main()
{
    // size and max size
    string s = "This is Mitul";
    cout << s.size() << endl;
    cout << s.max_size() << endl;

    // capacity
    string a;
    cout << a.capacity() << endl;

    // clear string
    string p = "Hello";
    cout << p << endl;
    p.clear();
    cout << p << endl;
    cout << p.size() << endl;

    // check if the string is empty
    string s1;
    if (s1.empty() == true)
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    // string resize
    string s2;
    cin >> s2;
    cout << s2 << endl;
    s2.resize(5);
    cout << s2.size() << endl;
    cout << s2 << endl;
    s2.resize(8, '.');
    cout << s2 << endl;

    return 0;
}