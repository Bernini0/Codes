#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> prime;
void seive()
{
    int arr[100001];
    memset(arr, 0, sizeof(arr));
    for (int i = 3; i * i < 100001; i += 2)
    {
        if (arr[i] == 0)
        {
            for (int j = i * i; j < 100001; j += 2 * i)
            {
                arr[j] = 1;
            }
        }
    }
    prime.push_back(2);
    for (int i = 3; i < 100001; i += 2)
    {
        if (arr[i] == 0)
        {
            prime.push_back(i);
        }
    }
}
int factory(int c, int a, int b)
{
    int abc = 0;
    for (int j = a; j <= b; j++)
    {
        int res = 1;
        int n = j;
        for (int i = 0; i < prime.size() && prime[i] * prime[i] <= n; i++)
        {
            int cnt = 0;
            if (n % prime[i] == 0)
            {
                while (n % prime[i] == 0)
                {
                    cnt++;
                    n /= prime[i];
                }
            }
            if (cnt > 0)
            {
                res *= (cnt + 1);
            }
        }
        if (n > 1)
        {
            res *= 2;
        }
        if (res == c)
        {
            abc++;
        }
    }
    return abc;
}
int main()
{
    seive();
    printf("%ld\n", prime.size());
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    if(b < a)swap(a,b);
    int abc = factory(n, a, b);
    printf("%d\n", abc);
}