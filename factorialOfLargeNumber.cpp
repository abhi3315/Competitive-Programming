/* Factorials of large numbers
Constraints:
1 ≤ test ≤ 100
1 ≤ num ≤ 1000 */

#include <iostream>
using namespace std;

//Size of array
#define MAX 3000

//multiply function declaration
int multiply(int res[], int res_size, int x);

//factorial function definition and declaration
void factorial(int n)
{
    int res[MAX];
    res[0] = 1;
    int res_size = 1;
    for (int i = 2; i <= n; i++)
    {
        res_size = multiply(res, res_size, i);
    }

    for (int i = res_size - 1; i >= 0; i--)
    {
        cout << res[i];
    }

    cout << endl;
}

//multiply function declaration
int multiply(int res[], int res_size, int x)
{
    int carry = 0; //initially carry is equal to 0
    for (int i = 0; i < res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry)
    {
        res[res_size] = carry % 10;
        carry /= 10;
        res_size++;
    }

    return res_size;
}

//main function
int main()
{
    int test, num;
    cin >> test;
    while (test--)
    {
        cin >> num;
        factorial(num);
    }
    return 0;
}