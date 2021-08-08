#include <bits/stdc++.h>
using namespace std;
vector<long long int>primes;
#define ll long long int
void bitwise_seive()
{
    int arr[(1000100>>6) + 1];
    memset(arr,0,sizeof(arr));
    for (ll i = 3; i * i <= 1000100; i+=2)
    {
        if(!(arr[i >> 6] & (1 << ((i >>1) & 31)))){
            for(ll j = i*i; j <= 1000100; j+=2*i){
                arr[j >> 6] |= (1 << ((j >>1) & 31));
            }
        }
    }
    primes.push_back(2);
    for (long long int i = 3; i <= 1000100; i+=2)
    {
        if(!(arr[i >> 6] & (1 << ((i >>1) & 31)))){
            primes.push_back(i);
        }
    }
}
vector<pair<ll,ll>>factory;
void factors(ll n){
    // n /= a;
    // printf("%lld\n",n);
    for (int i = 0;primes[i]*primes[i] <= n; i++)
    {
        int cnt = 0;
        while (n%primes[i]==0)
        {
            // printf("sadfas\n");
            n/= primes[i];
            cnt++;
        }
        if(cnt > 0){
            factory.push_back({primes[i],cnt});
        }
    }
    if(n > 1){
        // printf("%lld\n",n);
        factory.push_back({n,1});
    }
    // for (int i = 0; i < factory.size(); i++)
    // {
    //     printf("%lld %lld\n",factory[i].first,factory[i].second);
    // }
    
    
}
vector<ll>divisors;
void generate(unsigned int index, ll div){
    if(index==factory.size()){
        divisors.push_back(div);
    }
    else
    {
        for (auto i = 0; i <= factory[index].second; i++)
        {
            generate(index+1,div);
            div *= factory[index].first;
        }
        
    }
}
int main()
{
    bitwise_seive();
    // printf("%d\n",primes.size());
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        ll a, b;
        scanf("%lld %lld", &a, &b);
        factory.clear();
        factors(a);
        divisors.clear();
        generate(0,1);
        int cnt = 0;
        sort(divisors.begin(),divisors.end());
        for (int i = 0; i < divisors.size()/2; i++)
        {
            if(divisors[i] >= b)cnt++;
            // printf("%lld\n",divisors[i]);
        }
        printf("Case %d: %d\n",tc, cnt);
    }
}