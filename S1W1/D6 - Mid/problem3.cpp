#include <bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    char c[999999];
    while (cin.getline(c, 999999))
    {
        len = strlen(c);
        sort(c, c + len);
        for (int i = 0; i < len; i++)
        {
            if (c[i] == ' ')
            {
                continue;
            }
            cout << c[i];
        }
        cout << endl;
    }
    return 0;
}