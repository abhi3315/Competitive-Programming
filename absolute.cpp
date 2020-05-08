//Programe to print absolute value without abs()

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int const mask = num >> (sizeof(int) * CHAR_BIT - 1);
    cout << ((num + mask) ^ mask);

    return 0;
}