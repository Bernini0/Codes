#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    scanf("%d", &n);
    ll arr[n+1];
    for (int i = 1; i <=n ; i++)
    {
        scanf("%lld", &arr[i]);
    }
    int m;
    scanf("%d", &m);
    vector<ll>ans;
    for (int i = 0; i < m; i++)
    {
        ll a, b;
        scanf("%lld %lld", &a, &b);
        ll c = max(arr[1],arr[a]);
        ans.push_back(c);
        arr[1] = c+b;
        arr[a] = b+c;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        printf("%lld\n",ans[i]);
    }
    
    
}