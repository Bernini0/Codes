#include <bits/stdc++.h>
using namespace std;
//there are 53 primes between 1 and 250
long long int primes[53];
//calculating primes using seive
void bitwise_seive()
{
    int arr[(250 >> 6) + 1];
    memset(arr, 0, sizeof(arr));
    for (int i = 3; i * i < 250; i += 2)
    {
        if (!(arr[i >> 6] & (1 << ((i >> 1) & 31))))
        {
            for (int j = i * i; j < 250; j += 2 * i)
            {
                arr[j >> 6] |= (1 << ((j >> 1) & 31));
            }
        }
    }
    int k = 0;
    primes[k] = 2;
    k++;
    for (long long int i = 3; i < 250; i += 2)
    {
        if (!(arr[i >> 6] & (1 << ((i >> 1) & 31))))
        {
            primes[k] = i;
            k++;
        }
    }
}
int main()
{

    bitwise_seive();
    long long int sum_of_primes[53]; //cumulative sum of the primes
    long long int after_sleep[53];   //for each prime how much it contributes
    long long int cumulative[53];    //cumulative sum of the contributions of the primes
    sum_of_primes[0] = 2;
    after_sleep[0] = 3;
    cumulative[0] = 3;
    for (int i = 1; i < 53; i++)
    {
        after_sleep[i] = (primes[i] * (primes[i] + 1)) / 2;
        after_sleep[i] += cumulative[i - 1];
        after_sleep[i] -= sum_of_primes[i - 1];
        sum_of_primes[i] = primes[i] + sum_of_primes[i - 1];
        cumulative[i] = after_sleep[i] + cumulative[i - 1];
    }

    long long int n;
    scanf("%lld", &n);
    long long int ans = n;
    //even if n is prime it can't be used to go to sleep
    for (int i = n - 1; i > 0; i--)
    {
        bool prime = false;
        for (int j = 0; j < 53; j++)
        {
            if (primes[j] == i)
            { //if n is a prime we are adding how much it contributes, which we precalculated
                ans += after_sleep[j];
                prime = true;
                break;
            }
        }
        if (!prime)
            ans += i; //else we are simply adding the number
    }
    printf("%lld\n", ans);
}