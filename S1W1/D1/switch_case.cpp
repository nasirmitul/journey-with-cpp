#include <iostream>
using namespace std;
int main()
{
    int x = 3;
    switch (x)
    {
    case 1:
        cout << "One" << endl;
        break;
    case 2:
        cout << "Two" << endl;
        break;
    case 3:
        cout << "Three" << endl;
        break;
    case 4:
        cout << "Four" << endl;
        break;
    case 5:
        cout << "Five" << endl;
        break;
    default:
        cout << "didn't matched" << endl;
        break;
    }

    int a = 10;
    switch (a % 2)
    {
    case 0:
        cout << "Even" << endl;
        break;
    case 1:
        cout << "Odd" << endl;
    default:
        break;
    }

    return 0;
}