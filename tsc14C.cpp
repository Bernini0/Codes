#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long int
ll mod = 1000000000 + 7;
ll factorial[1000000 + 1];
ll bigmod(ll a, ll b)
{
    if (a == 0)
        return 1;
    ll product = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            product *= a;
            b--;
            product %= mod;
        }
        a *= a;
        a %= mod;
        b /= 2;
    }
    return product;
}
ll NcR(ll n, ll r)
{
    ll a = factorial[n];
    ll b = factorial[n - r] * factorial[r];
    b %= mod;
    b = bigmod(b, mod - 2);
    return (a * b) % mod;
}
int main()
{
    int t;
    scanf("%d", &t);
    factorial[0] = 1ll;
    for (ll i = 1; i < 1000000 + 1; i++)
    {
        factorial[i] = factorial[i - 1] * i;
        factorial[i] %= mod;
    }
    while (t--)
    {
        ll n;
        scanf("%lld", &n);
        ll a;
        ll ans = 0;
        // printf("%d\n", bigmod(2, 10));
        for (ll i = 0; i < n; i++)
        {
            scanf("%lld", &a);
            ll b = (NcR(n + 1, i + 1) - 1);
            ans += (a * b)%mod;
            // printf("%lld\n", b);
            ans %= mod;
        }
        printf("%lld\n", ans);
    }
}