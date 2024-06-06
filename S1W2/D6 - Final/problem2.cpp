#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    int flag = 0;
    stringstream ss(s);
    string word;

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            flag++;
            break;
        }
    }

    if (flag > 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}