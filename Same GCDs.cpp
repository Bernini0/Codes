#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int>primes;
void bitwise_seive()
{
    int arr[(100000>> 6) +1];
    memset(arr,0,sizeof(arr));
    for (int i = 3; i*i < 100000; i+= 2)
    {
        if(!(arr[i>>6] & (1 <<((i>>1) & 31)))){
            for(int j = i*i; j < 100000; j+= 2*i){
                arr[j >> 6] |= (1 << ((j >> 1) & 31));
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i < 100000; i+= 2){
        if(!(arr[i>>6] & (1 << ((i>>1) & 31)))){
            primes.push_back(i);
        }
    }
}
vector<ll>factory;
ll factor(ll n){
    for (int i = 0; i < primes.size() && primes[i]*primes[i] <= n; i++)
    {
        if(n%primes[i]==0){
            factory.push_back(primes[i]);
            while (n%primes[i]==0)
            {
                n/= primes[i];
            }
            
        }
        if(n==1)break;
    }
    if(n!= 1){
        factory.push_back(n);
    }
}
ll eular_phi(ll n)
{
    for (int i = 0; i < factory.size(); i++)
    {
        n /= (factory[i]);
        n *= (factory[i]-1);
    }
    return n;
}
int main()
{
    bitwise_seive();
    // printf("%d\n",primes.size());
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll n, a;
        scanf("%lld %lld", &a, &n);
        factory.clear();
        factor(n/__gcd(n,a));
        ll ans = eular_phi(n/__gcd(n,a));
        printf("%lld\n",ans);
    }
    
}