#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod = 998244353;
ll p = mod;
ll bigmod(ll a, ll p)
{
    ll product = 1;
    a = a % mod;
    if (a == 0)
        return 0;
    while (p > 0)
    {
        if (p & 1)
        {
            product *= a;
            product = product % mod;
            p--;
        }
        a *= a;
        a %= mod;
        p /= 2;
    }
    return product;
}
ll dp[200000 + 1];
void fibonacci()
{
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i < 200001; i++)
    {
        dp[i] = ((dp[i - 2]) + (dp[i - 1])) % mod;
    }
}
ll powmod(ll a, ll b)
{
    a %= p;
    if (a == 0)
        return 0;
    ll product = 1;
    while (b > 0)
    {
        if (b & 1)
        { // you can also use b % 2 == 1
            // printf("1>2%lld\n",product);
            product *= a;
            product %= p;
            --b;
            // printf("2>%lld\n",product);
        }
        // printf("3>%lld\n",product);
        a *= a;
        a %= p;
        b /= 2; // you can also use b >> 1
        // printf("4>%lld\n",product);
    }
    return product;
}
int main()
{
    fibonacci();
    // int t;
    // scanf("%d", &t);

    int n;
    scanf("%d", &n);
    // printf("%d\n",dp[3]);
    ll c = powmod(powmod(2, n), mod - 2);
    // printf("%lld\n", c);
    ll ans = (c * dp[n]) % mod;
    printf("%lld\n", ans);
}