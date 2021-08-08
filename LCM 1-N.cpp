#include <bits/stdc++.h>
using namespace std;
#define ll unsigned int
ll primesqn[5761482];
ll primesqn1[5761482];
ll cnt = 0;
void seive(){
    int n = 100000000;
    n = n >> 6;
    int arr[n+1];
    n = n << 6;

    memset(arr,0,sizeof(arr));
    for (int i = 3; i*i <= n; i+=2)
    {
        if(!(arr[i>>6] & (1 << ((i >>1) & 31)))){
            for (int j = i*i; j <= n; j+= 2*i)
            {
                arr[j >> 6] |= (1 << ((j >> 1) & 31));
            }
           
        }
    }
    primesqn[0] = 2;
    primesqn1[0] = 2;
    cnt = 1;
    for (int i = 3; i <= n; i+=2)
    {
        if(!(arr[i >> 6] & (1 << ((i >> 1) & 31)))){
            primesqn[cnt] = i;
            primesqn1[cnt] = primesqn[cnt]*primesqn1[cnt-1];
            cnt++;
        }
    }
   
   
}
ll bigmod(ll a, ll b){
    if(b==0)return 1;
    else if(b%2==0){
        ll ret = bigmod(a,b/2);
        return ret*ret;
    }
    else return a*bigmod(a,b-1);
}
ll cal(ll n)
{
    ll temp,ret=1;

    for(ll i=0; primesqn[i]*primesqn[i]<=n; i++)
    {
        temp=n;
        temp=temp/primesqn[i];
        while(temp>=primesqn[i])
        {
            temp=temp/primesqn[i];
            ret=ret*primesqn[i];
        }
    }
    return ret;

}
int main()
{
    seive();
    ll t;
    scanf("%u", &t);
    for(int tc = 1; tc <= t; tc++){
        ll n;
        scanf("%u", &n);
        ll ans;
        ans = cal(n);
        ll val;
        val = upper_bound(primesqn,primesqn+cnt,n)-primesqn;
        // printf("\n");
        val--;
        // printf("%d\n",val);
        ans = ans * primesqn1[val];
        // printf("\n");
        printf("Case %d: %u\n",tc,ans);
    }
    return 0;
}