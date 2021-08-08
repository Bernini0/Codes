#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll b, d;
        scanf("%lld %lld", &b, &d);
        ll e = b / __gcd(b, d), f = d / __gcd(b, d);
        ll a = b * e;
        ll x = a;
        a /= f;
        if (x % f == 0)
        {
            a--;
        }
        a /= e;
        printf("%lld\n", a);
    }
}