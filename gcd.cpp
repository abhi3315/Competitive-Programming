// Euclidean algorithm for GCD

/* Constraints:
1 <= test<= 26
1 <= num <= 60 */

#include <iostream>
using namespace std;

//function to find gcd
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

//main function
int main()
{
    int test, num;
    cin >> test;
    while (test--)
    {
        cin >> num;
        int arr[num];
        for (int i = 0; i < num; i++)
            cin >> arr[i];
        int res = arr[0];
        for (int i = 1; i < num; i++)
        {
            if (res == 1)
                break;
            res = gcd(arr[i], res);
        }
        cout << res << endl;
    }
    return 0;
}