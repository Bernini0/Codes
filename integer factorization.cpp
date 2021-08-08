#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>prime;
void seive()
{
    int arr[40000000>>6];
    memset(arr,0,sizeof(arr));
    for (int i = 3; i*i < 40000000; i+= 2)
    {
        if(!(arr[i >> 6] & (1 << ((i >> 1) & 31)))){
            for (int j = i*i; j < 40000000; j+= 2*i)
            {
                arr[j>>6] |= (1 << ((j>>1)& 31));
            }
            
        }
    }
    prime.push_back(2);
    for(int i =3 ; i < 40000000; i+= 2){
        if(!(arr[i>>6] & (1 << ((i >>1) & 31)))){
            prime.push_back(i);
        }
    }
    
}
vector<pair<ll,ll>>factor;
void factory(ll n){
    for (int i = 0; i < prime.size() && prime[i]*prime[i] <=n; i++)
    {
        int cnt = 0;
        if(n%prime[i]==0){
            while (n%prime[i]==0)
            {
                cnt++;
                n /= prime[i];
            }
            
        }
        if(cnt>0){
            factor.push_back(make_pair(prime[i],cnt));
        }
    }
    if(n >1){
        factor.push_back(make_pair(n,1));
    }
}
int main()
{
    ll n;
    seive();
    // printf("%ld\n",prime.size());
    while(scanf("%lld", &n) && n !=0){
        factor.clear();
        factory(n);
        for (int i = 0; i < factor.size()-1; i++)
        {
            printf("%lld^%lld ",factor[i].first,factor[i].second);
        }
        printf("%lld^%lld\n",factor[factor.size()-1].first,factor[factor.size()-1].second);

    }
}