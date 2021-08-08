#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
vector<ll> prime;
// vector<pair<ll, ll>> factory;
ll mod = 1000000000+7;
void bitwiseseive(ll n){
    int arr[n/64];
    memset(arr,0,sizeof(arr));
    for (int i = 3; i*i <= n; i+=2)
    {
        if(!(arr[i>>6] & (1 << ((i>>1)& 31)))){
            for (int j = i*i; j <= n; j+= 2*i)
            {
                arr[j>>6] |= (1 << ((j>>1) & 31));
            }
            
        }
    }
    prime.push_back(2);
    for (int i = 3; i < n; i+=2)
    {
        if(!(arr[i>>6] & (1<< ((i >>1 )& 31)))){
            prime.push_back(i);
        }
    }
    
}
vector<pair<ll,ll>> factor(ll n, vector<pair<ll,ll>>& factory)
{
    for (int i = 0; i < prime.size() && prime[i] * prime[i] <= n; i++)
    {
        ll cnt = 0;
        while (n % prime[i] == 0)
        {
            cnt++;
            n /= prime[i];
        }
        if (cnt != 0)
        {
            factory.push_back(make_pair(prime[i], cnt));
        }
    }
    if (n != 1)
    {
        factory.push_back(make_pair(n, 1));
    }
    return factory;
}
ll bigmod(ll a, ll b){
    if(a==0)return 0;
    ll product = 1;
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
    bitwiseseive(600000);
    ll a, b, c, n;
    ll ans = 1;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &n);
    for (int i = 0; i < n; i++)
    {
        ll d = (a*i*i)+(b*i)+c;
        vector<pair<ll,ll>>factory;
        factory = factor(d,factory);
        for (int i = 0; i < factory.size(); i++)
        {
            ans*= bigmod(factory[i].first,factory[i].second/2);
            ans%=mod;
        }
        factory.clear();
    }
    printf("%lld\n",ans);
}