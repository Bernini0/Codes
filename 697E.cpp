#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod = 1000000000 + 7;
long long int arr[1000 + 1];
ll bigmod(ll a, ll b)
{
    if (a == 0)
        return 1;
    ll product = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            product *= a;
            b--;
            product %= mod;
        }
        a *= a;
        a %= mod;
        b /= 2;
    }
    return product;
}
ll nCr(ll n, ll r)
{
    if(n<r)return 0;
    if(n==r)return 1;
    ll a = arr[r];
    a = bigmod(arr[r],mod-2)%mod;
    ll b = bigmod(arr[n-r],mod-2)%mod;
    a*= b;
    a %= mod;
    a *= arr[n];
    a %= mod;
    return a;
}
int main()
{
    int t;
    scanf("%d", &t);
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i <= 1000; i++)
    {
        arr[i] = i * arr[i - 1];
        arr[i]%=mod;
    }
    while (t--)
    {
        int n,k;
        // int cnt[1000+1];
        // memset(cnt,0,sizeof(cnt));
        scanf("%d %d", &n, &k);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            // cnt[a[i]]++;
        }
        sort(a,a+n);
        reverse(a,a+n);
        int p = a[k-1];
        int cnt = 0;
        int cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==p){
                cnt++;
                if(i < k){
                    cnt2++;
                }
            }
            else if(a[i] < p){
                break;
            }
        }
        ll ans = nCr(cnt,cnt2);
        printf("%lld\n",ans);
    }
    
}