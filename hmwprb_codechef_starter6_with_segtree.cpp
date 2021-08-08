#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[1000000+1];
ll t[4*1000000+10];
void build(ll v, ll tl, ll tr)
{
    if(tl==tr)t[v] = arr[tl];
    else{
        ll tm = (tl+tr)/2;
        build(2*v,tl,tm);
        build(2*v+1,tm+1,tr);
        t[v] = min(t[2*v],t[2*v+1]);
    }
}
void update(ll v, ll tl, ll tr, ll pos, ll new_val)
{
    if(tl==tr)t[v] = new_val;
    else{
        ll tm = (tl+tr)/2;
        if(pos<=tm)update(2*v,tl,tm,pos,new_val);
        else update(2*v+1,tm+1,tr,pos,new_val);
        t[v] = min(t[2*v],t[2*v+1]);
    }
}
ll query(ll v, ll tl, ll tr, ll l, ll r)
{
    if(l > r)return 200000000000000;
    if(tl==l && tr == r)return t[v];
   
    ll tm = (tl+tr)/2;
    return min(query(2*v, tl,tm, l, min(tm,r)), query(2*v+1, tm+1,tr, max(tm+1,l),r));
    
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        if(n <= k){
            printf("0\n");
            continue;
        }
        build(1,0,n-1);
        // printf("%d\n",query(1,0,n-1,0, 2));
        for (int i = k+1; i < n; i++)
        {
            int l = i-k-1;
            int r = i-1;
            ll a = query(1,0,n-1,l,r);
            // printf("%d\n",a);
            update(1,0,n-1,i,arr[i]+a);
        }
        ll ans = query(1,0,n-1,n-k-1, n-1);
        printf("%lld\n",ans);
    }
}