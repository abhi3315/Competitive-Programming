/*Constraints:
1<=test<=50
1<=n<=25*/

#include <iostream>
#include <algorithm>

using namespace std;

//function to find lcm
long long getSmallestDivNum(int num)
{
    long long lcm = 1;
    for (long long i = 1; i <= num; i++)
        lcm = (lcm * i) / (__gcd(i, lcm));

    return lcm;
}

int main()
{
    int test, n;
    cin >> test;
    while (test--)
    {
        cin >> n;
        cout << getSmallestDivNum(n) << endl;
    }

    return 0;
}