#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> prime;
void seive()
{
    int arr[1000000 >> 6];
    memset(arr, 0, sizeof(arr));
    for (int i = 3; i * i < 1000000; i += 2)
    {
        if (!(arr[i >> 6] & (1 << ((i >> 1) & 31))))
        {
            for (int j = i * i; j < 1000000; j += 2 * i)
            {
                arr[j >> 6] |= (1 << ((j >> 1) & 31));
            }
        }
    }
    prime.push_back(2);
    for (int i = 3; i < 1000000; i += 2)
    {
        if (!(arr[i >> 6] & (1 << ((i >> 1) & 31))))
        {
            prime.push_back(i);
        }
    }
}
vector<int> factor;
int factory(ll n)
{
    int res = 1;
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
            factor.push_back(prime[i]);
            res *= (cnt + 1);
        }
    }
    if(n > 1){
        factor.push_back(n);
        res *= 2;
    }
    return res;
}
int eular_phi(ll n){
    int ans = n;
    for (int i = 0; i < factor.size(); i++)
    {
        ans /= factor[i];
        ans *= (factor[i]-1);
    }
    return ans;
    
}
int main()
{
    ll n;
    seive();
    while(scanf("%lld", &n) && n !=0){
        if(n==1){
            printf("0\n");
            continue;
        }
        factor.clear();
        int a = factory(n);
        int b = eular_phi(n);
        n = n+1-a-b;
        printf("%lld\n",n);

    }
}