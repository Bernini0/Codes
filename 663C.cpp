#include <bits/stdc++.h>
using namespace std;
long long int mod = 1000000000+7;
#define ll long long int
ll bigmod(ll a, ll b){
    if(a==0)return a;
    ll product = 1ll;
    while (b >= 1)
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
    long long int arr[1000000+1];
    long long int mod = 1000000000+7;
    arr[0] = 1ll;
    for (int i = 1; i < 1000000+1; i++)
    {
        arr[i]= arr[i-1]*(i*1ll);
        arr[i]%=mod;
    }
    ll n;
    scanf("%lld", &n);
    long long int d = bigmod(2,n-1);
    arr[n] -= d;
    arr[n] += mod;
    arr[n] %= mod;
    printf("%lld\n",arr[n]);
}