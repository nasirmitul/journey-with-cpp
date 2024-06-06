#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string allName[100];
    int allClass[100];
    char allSection[100];
    int allId[100];

    for (int i = 0; i < n; i++)
    {
        cin >> allName[i] >> allClass[i] >> allSection[i] >> allId[i];
    }

    for (int i = 0; i < n / 2; i++)
    {
        char temp = allSection[i];
        allSection[i] = allSection[n - i - 1];
        allSection[n - i - 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << allName[i] << " " << allClass[i] << " " << allSection[i] << " " << allId[i] << endl;
    }

    return 0;
}