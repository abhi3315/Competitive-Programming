// LCM of n numbers

/* Constraints:
1 <= test<= 26
1 <= num <= 10000 */

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

#define MAX 100000

//sieve array declaration
bool sieveArr[MAX] = {false};

//Vector to store primes
vector<int> prime;

//prime sieve function
void sieve()
{
    memset(sieveArr, true, MAX);
    for (int i = 2; i * i <= MAX; i++)
        if (sieveArr[i])
        {
            for (int j = i * i; j <= MAX; j += i)
                sieveArr[j] = false;
        }

    for (int i = 2; i < MAX; i++)
        if (sieveArr[i])
            prime.push_back(i);
}

//LCM function
long long getLcm(int n)
{
    long long lcm = 1;
    for (int i = 0; i < prime.size() && prime[i] <= n; i++)
    {
        int current = prime[i];
        while (current * prime[i] <= n)
            current *= prime[i];

        lcm *= current;
    }

    return lcm;
}

int main()
{
    sieve();
    int test;
    cin >> test;

    while (test--)
    {
        int num;
        cin >> num;
        cout << getLcm(num) << endl;
    }

    return 0;
}