#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2 = {6, 7, 8, 9};
    // v.insert(v.begin()+2, 10); //--> inserting just a value
    v.insert(v.begin()+2, v2.begin(), v2.end()); //--> inserting multiple value from another vector
    for(int a: v){
        cout<<a<<" ";
    }
    return 0;
}