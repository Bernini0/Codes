#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    scanf("%d", &n);
    vector<ll>arr;
    bool vis[n+1];
    memset(vis,false,sizeof(vis));
    ll c;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &c);
        if(c > 0 && c <= n && !vis[c]){
            vis[c] = true;
        }
        else
        {
            arr.push_back(c);
        }
        
    }
    sort(arr.begin(),arr.end());
    int k = 0;
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if(vis[i])continue;
        else
        {
            ans += abs(arr[k]-i);
            k++;
        }
        
    }
    printf("%lld\n",ans);
}