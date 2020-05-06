#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    //component 1
    cout << "*";
    for (int i = 0; i < (n - 3) / 2; i++)
        cout << " ";
    for (int i = 0; i < (n + 1) / 2; i++)
        cout << "*";
    cout << endl;

    //component 2
    for (int row = 0; row < (n - 3) / 2; row++)
    {
        cout << "*";
        for (int i = 0; i < (n - 3) / 2; i++)
            cout << " ";
        cout << "*" << endl;
    }

    //component 3
    for (int i = 0; i < n; i++)
        cout << "*";
    cout << endl;

    //component 4
    for (int row = 0; row < (n - 3) / 2; row++)
    {
        for (int i = 0; i < (n - 1) / 2; i++)
            cout << " ";
        cout << "*";
        for (int i = 0; i < (n - 3) / 2; i++)
            cout << " ";
        cout << "*" << endl;
    }

    //component 5
    for (int i = 0; i < (n + 1) / 2; i++)
        cout << "*";
    for (int i = 0; i < (n - 3) / 2; i++)
        cout << " ";
    cout << "*";

    return 0;
}