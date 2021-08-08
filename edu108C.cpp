#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        bool vis[n+1];
        memset(vis,false,sizeof(vis));
        vector<ll>adj[n+1];
        pair<int,ll>arr[n+1];
        for (int i = 0; i < n; i++)
        {
            // int a;
            scanf("%d", &arr[i].first);
            vis[arr[i].first] = true;
        }
        for (int i = 0; i < n; i++)
        {
            // ll a;
            scanf("%lld", &arr[i].second);
            adj[arr[i].first].push_back(arr[i].second);
        }
        vector<int>v;
        ll ans[n+1];
        memset(ans,0,sizeof(ans));
        for (int i = 0; i < n+1; i++)
        {
            if(vis[i]){
                sort(adj[i].begin(),adj[i].end(),greater<ll>());
                for (int j = 1; j < adj[i].size(); j++)
                {
                    adj[i][j]+= adj[i][j-1];
                }
                for (int l = 1; l <= adj[i].size(); l++)
                {
                    int p = (adj[i].size()/l)*l;
                    p--;
                    if(p >= 0){
                        ans[l]+= adj[i][p];
                    }
                }
                
                v.push_back(i);
            }
        }
        for (int i = 1; i < n+1; i++)
        {
            printf("%lld ",ans[i]);
        }
        printf("\n");
    }
    
}