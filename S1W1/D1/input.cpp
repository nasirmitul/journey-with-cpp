#include <iostream>
using namespace std;
int main()
{
    int a;
    long long b;
    cin >> a >> b;
    cout << a << endl
        << b << endl;

    char c;
    cin >> c;
    int ascii = c;
    cout << c << "=" << ascii << endl;

    cout << int(c) << endl;


    //Type Casting

    // long long int <-> int
    // int <-> char
    // float/double <-> int

    int x = 10;
    //if the datatype is in multiple word, need to keep it in ()
    long long int y = (long long int)(x);



    return 0; 
}