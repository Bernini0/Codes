#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int>prime;
void seive()
{
    int arr[(1000000>>6) + 1];
    memset(arr,0,sizeof(arr));
    for (int i = 3; i*i < 1000000; i+= 2)
    {
        if(!(arr[i>>6]  & (1 << ((i>>1) & 31)))){
            for (int j = i*i; j < 1000000; j+= 2*i)
            {
                arr[j>>6] |= (1 << ((j>>1) & 31));
            }
            
        }
    }
    prime.push_back(2);
    for(int i =3; i<1000000; i+= 2){
        if(!(arr[i >> 6] & (1 << ((i>>1) & 31)))){
            prime.push_back(i);
        }
    }
}
vector<ll>factor;
void factory(ll n)
{
    for (int i = 0; i < prime.size() && prime[i] * prime[i] <= n; i++)
    {
        int cnt = 0;
        if(n%prime[i]==0){
            while (n%prime[i]==0)
            {
                n /= prime[i];
                cnt++;
            }
            
        }
        if(cnt > 0){
            factor.push_back(prime[i]);
        }
    }
    if(n>1){
        factor.push_back(n);
    }
    // printf("%ld\n",factor.size());
}
ll eular_phi(ll n)
{
    factor.clear();
    factory(n);
    for (int i = 0; i <factor.size(); i++)
    {
        n /= factor[i];
        n *= (factor[i]-1);
    }
    return n;
}
vector<ll>divcount;
void divisors(ll n){
    for (ll i = 1; i*i <= n; i++)
    {
        if(n%i==0){
            ll d1 = i;
            ll d2 = n/i;
            divcount.push_back(d1);
            if(d1 != d2){
                divcount.push_back(d2);
            }
        }
    }
    
}
int main()
{
    seive();
    int t;
    scanf("%d", &t);
    // ll a = eular_phi(1000000000000);
    // printf("%lld\n",a);
    for(int tc = 1; tc <= t; tc++)
    {
        int q;
        ll n;
        scanf("%lld %d", &n, &q);
        divcount.clear();
        divisors(n);
        sort(divcount.begin(),divcount.end());
        vector<pair<ll,ll>>arr;
        for (int i = 0; i < divcount.size(); i++)
        {
            ll c = eular_phi(divcount[i]);
            // printf("%lld %lld\n",divcount[i],c);
            arr.push_back(make_pair(divcount[i],c));
        }
        sort(arr.begin(),arr.end());
        ll brr[q];
        int j = 0;
        while (q--)
        {
            ll p;
            scanf("%lld", &p);
            if(p >= n){
                brr[j] = n;
                j++;
                continue;
            }
            else if(p <= 0){
                brr[j] = 0;
                j++;
            }
            else
            {
                p = (n+p-1)/p;
                int i = 0;
                ll res = n;
                for (int i = 0; i < arr.size(); i++)
                {
                    if(arr[i].first < p){
                        res -= arr[i].second;
                    }
                }
                
                brr[j] = res;
                j++;
            }
            
        }
        printf("Case %d\n",tc);
        for (int i = 0; i < j; i++)
        {
            printf("%lld\n",brr[i]);
        }
        
        
    }
    
}