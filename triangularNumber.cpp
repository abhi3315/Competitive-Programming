/* Constraints:
1 <= test <= 100
1 <= num <= 10000000 */

#include <iostream>
#include <math.h>

using namespace std;

//triangularNumber function definition
int triangularNumber(int num)
{
    if (num < 0)
        return 0;

    float d = 1 + 8 * num;
    if (d < 0)
        return 0;

    float root1 = (-1 + sqrt(d)) / 2;
    float root2 = (-1 - sqrt(d)) / 2;

    if (root1 > 0 && floor(root1) == root1)
        return 1;

    if (root2 > 0 && floor(root2) == root2)
        return 1;

    return 0;
}

//main function
int main()
{
    int test, num;
    cin >> test;
    while (test--)
    {
        cin >> num;
        cout << triangularNumber(num) << endl;
    }
    return 0;
}