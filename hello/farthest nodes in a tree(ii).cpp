#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>adj[30000+1];
bool vis[30000+1];
long long int weight[30000+1];
// long long int ans[30000+1];
long long int maximum = -1;
int l;
void dfs(int s)
{
    vis[s] = true;
    for (unsigned int i = 0; i < adj[s].size(); i++)
    {
        if(!vis[adj[s][i].first]){
            weight[adj[s][i].first] += weight[s]+adj[s][i].second;
            if(weight[adj[s][i].first] > maximum){
                maximum = weight[adj[s][i].first];
                l = adj[s][i].first;
            }
            dfs(adj[s][i].first);
        }
    }
    
}
long long int bfs(int s, int t)
{
    // long long int ans = 0;
    memset(vis,false,sizeof(vis));
    memset(weight,0,sizeof(weight));
    vis[s] = true;
    queue<int>q;
    if(vis[t])return weight[t];
    q.push(s);
    while (!vis[t])
    {
        int u = q.front();
        q.pop();
        for (int i = 0; i < adj[u].size(); i++)
        {
            if(!vis[adj[u][i].first]){
                vis[adj[u][i].first] = true;
                weight[adj[u][i].first] += weight[u]+adj[u][i].second;
                if(vis[t]){
                    return weight[t];
                }
                q.push(adj[u][i].first);
            }
        }
        
    }
    
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        for (int i = 0; i < 30000+1; i++)
        {
            adj[i].clear();
        }
        
        int n;
        scanf("%d",&n);
        int u, v, w;
        for(int i = 0; i  < n-1; i++)
        {
            scanf("%d %d %d", &u, &v, &w);
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        memset(vis,false,sizeof(vis));
        memset(weight,0,sizeof(weight));
        dfs(0);
        
        int left = l;
        maximum  = -1;
        memset(vis,false,sizeof(vis));
        memset(weight,0,sizeof(weight));
        dfs(left);
        int right = l;
        // printf("%d %d\n",left,right);
        printf("Case %d:\n",tc);
        for (int i = 0; i <= n-1; i++)
        {
            if(i==left || i == right){
                printf("%lld\n",maximum);
            }
            else{
                long long int c = bfs(left,i);
                long long int d = bfs(right,i);
                printf("%lld\n",max(c,d));
            }
        }
        maximum = -1;

    }
}
    