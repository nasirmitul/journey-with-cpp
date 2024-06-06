#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "Hello";
    string b = " World";
    a = a + b;
    a.append(b);
    cout << a << endl
        << b << endl;

    a.push_back('A');
    a.pop_back();
    return 0;
}