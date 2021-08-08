#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector <int> prime;
vector<pair<ll,int>>abfactor;
vector<pair<ll,int>>lfactor;
void bitwise_seive(){
    ll n = 1000000;
    n = n>>6;
    int arr[n+1];
    n = n << 6;
    memset(arr,0,sizeof(arr));
    for (int i = 3; i*i < n; i+=2)
    {
        if(!(arr[i>>6] & (1 << ((i>>1) & 31)))){
            for (int j = i*i; j < n; j+= 2*i)
            {
                arr[j>>6] |= (1 << ((j >> 1) & 31));
            }
            
        }
    }
    prime.push_back(2);
    for (int i = 3; i < n; i+=2)
    {
        if(!(arr[i>>6] & (1 << ((i>>1) & 31)))){
            prime.push_back(i);
        }
    }
    
}
void factor(ll a, ll b, ll l){
    ll c = a*b;
    c = c/__gcd(a,b);
    // printf("%lld\n",c);
    for (int i = 0; i < prime.size(); i++)
    {
        int cnt = 0;
        while (c%prime[i]==0)
        {
            cnt++;
            c /= prime[i];
        }
        abfactor.push_back(make_pair(prime[i],cnt));
    }
    // printf("%d\n",abfactor.size());
    for (int i = 0; i < prime.size(); i++)
    {
        int cnt = 0;
        while (l%prime[i]==0)
        {
            cnt++;
            l /= prime[i];
        }
        lfactor.push_back(make_pair(prime[i],cnt));
    }
    if(l != 1){
        lfactor.push_back(make_pair(l,1));
        abfactor.push_back(make_pair(l,0));
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    bitwise_seive();
    // printf("%d\n",prime.size());
    for(int tc = 1;tc <= t; tc++)
    {
        ll a, b, l;
        scanf("%lld %lld %lld", &a, &b, &l);
        abfactor.clear();
        lfactor.clear();
        factor(a,b,l);
        bool err = true;
        ll ans = 1;
        for (int i = 0; i < lfactor.size(); i++)
        {
            if(abfactor[i].second > lfactor[i].second){
                err = false;
                break;
            }
            else if(lfactor[i].second > abfactor[i].second)
            {
                ll cur = 1;
                int j = lfactor[i].second;
                while (j>0)
                {
                    cur *= lfactor[i].first;
                    j--;
                }
                ans *= cur;
                // printf("%lld\n",ans);
            }
            
        }
        if(!err){
            printf("Case %d: impossible\n",tc);
        }
        else
        {
            printf("Case %d: %lld\n",tc,ans);
        }
    }
    
}