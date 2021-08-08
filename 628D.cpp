#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll u, v;
    scanf("%lld %lld", &u, &v);
    if (u > v || (v - u) % 2 == 1)
    {
        printf("-1\n");
        return 0;
    }
    if (v == 0)
    {
        printf("0\n");
        return 0;
    }
    if (u == v)
    {
        printf("1\n");
        printf("%lld\n", v);
        return 0;
    }
    ll a = (v - u) / 2;
    if ((a & u) == 0)
    {
        printf("2\n");
        printf("%lld %lld\n", a, u + a);
        return 0;
    }

    printf("3\n");
    printf("%lld %lld %lld\n", a, a, u);
}