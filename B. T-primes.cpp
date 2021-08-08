#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>primes;
void bitwise_seive()
{
    int arr[(1000000 >> 6) +1];
    memset(arr,0,sizeof(arr));
    for (int i = 3; i*i <= 1000000; i+= 2)
    {
        if(!(arr[i >> 6] & (1 << ((i >>1) & 31)))){
            for(int j = i*i; j <= 1000000; j+= 2*i){
                arr[j >> 6] |= (1 << ((j >> 1) &31));
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= 1000000; i+= 2)
    {
        if(!(arr[i>>6] & (1 << ((i >> 1) & 31)))){
            primes.push_back(i);
        }
    }
    
}
int main()
{

    bitwise_seive();
    // printf("%lld\n",primes[primes.size()-1]);
    for (int i = 0; i < primes.size(); i++)
    {
        primes[i] = primes[i]*primes[i];
    }
    int n;
    scanf("%d", &n);
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int idx = lower_bound(primes.begin(),primes.end(),arr[i])-primes.begin();
        if(arr[i]==primes[idx]){
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    }
    
}