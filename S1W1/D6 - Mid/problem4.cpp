#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int id, mark;
    char name[110], section[10];

    int tempId, tempMark = -1;
    char tempName[110], tempSection[10];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> id >> name >> section >> mark;

            if (mark > tempMark)
            {
                tempId = id;
                strcpy(tempName, name);
                strcpy(tempSection, section);
                tempMark = mark;
            }
        }
        cout << tempId << " " << tempName << " " << tempSection << " " << tempMark << endl;
        tempMark = -1;
    }

    return 0;
}