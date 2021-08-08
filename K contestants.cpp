#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod = 1000000000 + 7;
long long int arr[1000000 + 1];
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
ll nCr(ll n, ll r)
{
    if(n<r)return 0;
    if(n==r)return 1;
    ll a = arr[r];
    a = bigmod(arr[r],mod-2)%mod;
    ll b = bigmod(arr[n-r],mod-2)%mod;
    a*= b;
    a %= mod;
    a *= arr[n];
    a %= mod;
    return a;
}
int main()
{
    int t;
    scanf("%d", &t);
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i <= 1000000; i++)
    {
        arr[i] = i * arr[i - 1];
        arr[i]%=mod;
    }

    while (t--)
    {
        ll a, b, c, d, e;
        scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &e);
        d -= e;
        if (d < 2 || a + b + c < d + e)
        {
            printf("0\n");
            continue;
        }
        ll ans = 0;

        ll x = nCr(a + b, d);
        ll y = nCr(b, d);
        ll z = nCr(a, d);
        // printf("%lld %lld %lld\n",a,b,z);
        // ans += (((nCr(a,i)*nCr(b,d-i))%mod) * nCr(c,e))%mod;
        ans = (x - y - z)%mod;
        ans *= nCr(c, e);
        ans %= mod;
        ans+=mod;
        ans %= mod;

        printf("%lld\n", ans);
    }
}