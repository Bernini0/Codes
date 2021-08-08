#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod = 1000000000+7;
ll bigmod(ll a, ll b){
    if(a==0)return 0;
    ll product = 1ll;
    while (b > 0)
    {
        if(b&1){
            product*=a;
            product%=mod;
            b--;
        }
        a*=a;
        a%=mod;
        b/=2;
    }
    return product;
}
int main()
{
    int t;
    scanf("%d", &t);
    ll fact[100001];
    fact[0] = 1;
    for (int i = 1; i < 100001; i++)
    {
        fact[i]=fact[i-1]*i;
        fact[i]%=mod;
    }
    while (t--)
    {
        ll n, k;
        scanf("%lld %lld", &n, &k);
        if(k==1){
            // ll ans = bigmod(2,k-1)*2;
            // ans%=mod;
            printf("%lld\n",n);
            continue;
        }
        else
        {
            ll ans = 0;
            for (int i = 0; i < k-1; i++)
            {
                ans += bigmod(n,i);
                if(ans >= mod){
                    ans-=mod;
                }
            }
            ans*=n;
            ans%=mod;
            ans*=(n-1);
            ans%=mod;
            ans+=n;
            ans%=mod;
            printf("%lld\n", ans);
        }
        

    }
    
}