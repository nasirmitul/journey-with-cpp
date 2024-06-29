#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[6] = {1, 2, 3, 4, 5, 6};

    vector<int> v1;                // type 1
    vector<int> v2(5);             // type 2
    vector<int> v3(5, 10);         // type 3
    vector<int> v4(v3);            // type 4
    vector<int> v5(a, a + 6);      // type 5
    vector<int> v6 = {1, 2, 3, 4}; // type 6

    for (int i = 0; i < v4.size(); i++)
    {
        cout << v5[i] << " ";
    }
    cout << endl;

    cout << v5.size() << endl;
    return 0;
}