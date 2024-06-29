#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout << v.max_size() << endl;
    cout << v.capacity() << endl;

    v.push_back(10);
    cout << v.capacity() << endl;
    v.push_back(20);
    cout << v.capacity() << endl;

    v.resize(2); 
    v.resize(7, 100);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    v.clear();

    return 0;
}