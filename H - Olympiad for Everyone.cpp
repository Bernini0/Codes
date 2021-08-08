#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    scanf("%d", &n);
    ll arr[n];
    ll q[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &q[i]);
    }
    sort(arr, arr + n);
    ll mod;
    scanf("%lld", &mod);
    sort(q, q + n);
    ll ans = 1;
    int j = 0;
    swap(arr,q);
    for (ll i = 0; i < n; i++)
    {
        ll inx = lower_bound(q, q + n, arr[n - 1 - i]) - q;
        // printf("%d ",inx);
        
        
            inx = n - inx - i;
            // printf("%d\n",inx);
            inx %= mod;
            ans *= inx;
            ans %= mod;
        
    }
    printf("%lld\n", ans);
}