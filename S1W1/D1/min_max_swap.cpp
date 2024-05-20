#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{

    // find min max using builtin function
    int a, b, c, d, e, f, g, h;
    cin >> a >> b >> c >> d >> e >> f >> g >> h ;

    int mn = min({a, b, c, d, e, f, g, h});
    int mx = max({a, b, c, d, e, f, g, h});

    cout << mn << endl << mx;



    // swap two value using builtin function
    int m, n;
    cin >> m >> n;
    swap(m, n);

    cout << m << " " << n;

    return 0;
}