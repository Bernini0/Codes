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
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll c,d;
        scanf("%lld %lld", &c, &d);
        if(c==0 && d==0){
            printf("0\n");
            continue;
        }
        ll ans = 1;
        ans *= powmod(26,c);
        ans *= powmod(10,d);
        printf("%lld\n",ans);
    }
    
}