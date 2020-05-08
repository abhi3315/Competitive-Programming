//Program to find the number of digits in a factorial

#include <iostream>
#include <math.h>
using namespace std;

int digitsInFactorial(int num)
{
    double digits = 0;
    for (int i = 2; i <= num; i++)
        digits += log10(i);

    return floor(digits) + 1;
}

int main()
{
    int test, num;
    cin >> test;
    while (test--)
    {
        cin >> num;
        cout << digitsInFactorial(num) << endl;
    }
    return 0;
}