#include <iostream>
#include <string>
using namespace std;
int main()
{
    // array input output
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i <n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i <n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    // string input output
    char s1[100];
    cin >> s1;
    cout << s1 << endl;

    //the function below is to skip the enter
    getchar();


    //taking string input including space
    char s2[100];
    cin.getline(s2, 100);
    cout << s2 << endl;


    return 0;
}