#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int>primes;
void bitwise_seive()
{
    int arr[(1000000>> 6) +1];
    memset(arr,0,sizeof(arr));
    for (int i = 3; i*i < 1000000; i+= 2)
    {
        if(!(arr[i>>6] & (1 <<((i>>1) & 31)))){
            for(int j = i*i; j < 1000000; j+= 2*i){
                arr[j >> 6] |= (1 << ((j >> 1) & 31));
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i < 1000000; i+= 2){
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
ll cnt, pos1, pos2, s1, s2;
void func(ll pos, ll val, ll koyta)//inclusion-exclusion recursive
{
    if(pos >= factory.size()){
        if(koyta % 2) s1 = s1 - (pos1 / val);
        else s1 = s1 + (pos1 / val);
        if(koyta % 2) s2 = s2 - (pos2 / val);
        else s2 = s2 + (pos2 / val);
        return;
    }
    func(pos + 1, val * factory[pos], koyta + 1);
    func(pos + 1, val, koyta);
}
ll cur1 = 0, cur2 = 0;
ll abc(ll a, ll b){//Inclusion-exclusion iterative
    cur1 = 0;
    cur2 = 0;
    ll sum = 0;
    for (int i = 1; i < (1 << factory.size()); i++)
    {
        ll multi = 1;
        ll bits = 0;
        for(int j = 0; j < factory.size(); j++){
            if(i & (1 << j)){
                bits++;
                multi*= factory[j];
            }
        }
        cur1 = a/multi;
        cur2 = b/multi;
        if(bits%2){
            sum += cur2-cur1;
        }
        else sum -= cur2-cur1;
    }
    return sum;
}
int main()
{
    int t;
    scanf("%d", &t);
    bitwise_seive();
    for (int tc = 1; tc <= t; tc++)
    {
        ll a, b, m;
        scanf("%lld %lld %lld", &a, &b, &m);
        s1 = 0, s2 = 0;
        // scanf("%lld %lld %lld", &a, &b, &m);
        if(a < b)swap(a, b);
        if(a==b|| b-a==1){
            printf("Case %d: 0\n",tc);
            continue;
        }
        pos1 = a-1;
        pos2 = a+m;
        factory.clear();
        factor(a-b);
        // func(0,1,0);
        ll ans =m+1- abc(a-1,a+m);
        printf("Case %d: %lld\n",tc, ans);
    }
    
}