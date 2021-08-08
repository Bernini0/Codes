#include <bits/stdc++.h>
using namespace std;
void checkprime(long long *p)
{
    long long i, j;
    for (i = 1; i < 251; i += 1)
    {
        p[i] = 1;
    }
    for (i = 4; i < 251; i += 2)
    {
        p[i] = 0;
    }
    for (i = 3; i < 251; i += 2)
    {
        if (p[i] == 1)
        {
            for (j = i + i; j < 251; j += i)
            {
                p[j] = 0;
            }
        }
    }
    p[1] = 0;
}
void primesum(long long *p, long long sum[], long long arr[])
{
    long long i, j, m;
    sum[0] = 0;
    arr[0] = 0;
    sum[1] = 0;
    m = 0;
    for (i = 1; i < 251; i += 1)
    {
        if (p[i] == 1)
        {
            sum[i] = sum[i - 1];
            arr[i] = ((i * (i - 1)) / 2LL) + sum[i - 1];
            sum[i] += arr[i];
            j = p[i];
        }
        else
        {
            sum[i] = sum[i - 1];
            arr[i] = ((i * (i + 1)) / 2LL) + sum[i];
        }
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    long long n, i, j, k, p[300], sum[300], arr[300];
    checkprime(p);
    primesum(p, sum, arr);
    while (t--)
    {
        scanf("%lld", &n);
        if (p[n] == 1)
        {
            printf("%lld\n", arr[n] + n);
        }
        else
        {
            printf("%lld\n", arr[n]);
        }
    }
}