/* Constraints:
1 <= test <= 100
1 <= num <= 1000 */

#include <iostream>

using namespace std;

//trailingZero function definition
int trailingZero(int n)
{
    int res = 0, i = 5;
    while (n / i)
    {
        res += n / i;
        i *= 5;
    }

    return res;
}

//main function
int main()
{
    int test, num;
    cin >> test;
    while (test--)
    {
        cin >> num;
        cout << trailingZero(num)<<endl;
    }
    return 0;
}