#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, k, x;
    scanf("%lld %lld %lld", &n, &k, &x);
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    sort(arr,arr+n);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%lld ",arr[i]);
    // }
    // printf("\n");
    vector<ll>v;
    ll cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]-arr[i-1] > x){
            v.push_back(arr[i]-arr[i-1]);
            cnt++;
        }
    }
    // printf("%lld\n",cnt);
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if(k <= 0)break;
        ll c = (v[i]-1)/x;
        // c/=x;
        if(c <= k){
            cnt--;
            k-=c;
        }
    }
    printf("%lld\n",cnt);
}