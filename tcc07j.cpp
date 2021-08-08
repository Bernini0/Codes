#include <bits/stdc++.h>
using namespace std;
bool vis[3000+1][3000+1];
vector<int>adj[3000+1];
int dp[3001][3001];
int arr[3000+1];
int l = -1;
int solve(int i, int k)
{
    if(k == 0)return arr[i];
    if(dp[i][k]!=-1)return dp[i][k];
    else
    {
        int a = -1000000000;
        for(int j : adj[i]){
            int b = solve(j,k-1);
            if(a < b){
                a = b;
                l = max(l,k-1);
            }
        }
        dp[i][k] = a;
    }
    // printf("%d %d %d\n",i,k,dp[i][k]);
    return dp[i][k];
}
int main()
{
    int n,m,t;
    scanf("%d %d %d", &n, &m, &t);
    for (int i = 2; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    memset(dp,-1,sizeof(dp));
    memset(vis,false,sizeof(vis));
    for (int i = 0; i < m; i++)
    {
        int u, v;
        scanf("%d %d", &u, &v);
        if(!vis[u][v]){
            adj[u].push_back(v);
            adj[v].push_back(u);
            vis[u][v] = vis[v][u] = true;
        }
    }
    int ans[t+1];
    ans[0] = 0;
    for (int i = 1; i <= t; i++)
    {
        if(i%2==1){
            ans[i] = ans[i-1];
        }
        else
        {
            l = -1;
            ans[i] = solve(1,i/2);
            // printf("%d\n",l);
            ans[i]+=(ans[i]*l);
            // printf("%d\n",ans[i]);
        }
    }
    for (int i = 1; i < t; i++)
    {
        printf("%d ",ans[i]);
    }
    printf("%d\n",ans[t]);
}