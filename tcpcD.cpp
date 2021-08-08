#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll powmod(ll a, ll b)
{
    ll product = 1;
    if (a == 0)
        return 1;
    while (b > 0)
    {
        if (b & 1)
        {
            product *= a;
            b--;
        }
        a *= a;
        b /= 2;
    }
    return product;
}
int f(ll a)
{
    int cnt = 0;
    while (a > 0){
        a /= 10;
        cnt++;
    }
    return cnt;
}
ll g(ll a){
    int k = f(a);
    return powmod(10,k);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n, x;
        scanf("%lld %lld", &n, &x);
        long long int sum = 0;
        ll a = f(x);
        int j = 0;
        ll b = g(x);
        while ((b-x)*a <= n)
        {
            n -= (b-x) * a;
            sum += b-x;
            x = b;
            b = g(x);
            a = f(x);
            // printf("%lld\n",sum);
        }
        a = f(x);
        if (n % a == 0)
        {
            sum += (n / a);
        }
        else
        {
            sum = -1;
        }

        printf("%lld\n", sum);
    }
}