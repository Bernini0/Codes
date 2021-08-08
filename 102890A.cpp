#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
ll mod = 1000000007;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll n, m;
        scanf("%llu %llu", &n, &m);
        ll ans = (n+1+((n*(n+1)/2)%mod))%mod;
        ans = (ans*((m+1)))%mod;
        printf("%llu\n",ans);
    }
    
}