#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>adj[30000+1];
bool vis[30000+1];
int weight[30000+1];
int bfs(int s){
    memset(vis,false,sizeof(vis));
    queue<int>q;
    q.push(s);
    memset(weight,0,sizeof(weight));
    int maximum = -1;
    vis[s] = true;
    int l;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int i = 0; i < adj[u].size(); i++)
        {
            if(!vis[adj[u][i].first]){
                vis[adj[u][i].first] = true;
                q.push(adj[u][i].first);
                weight[adj[u][i].first] = weight[u]+adj[u][i].second;
                if(maximum < weight[adj[u][i].first]){
                    maximum = weight[adj[u][i].first];
                     l = adj[u][i].first;
                }
                // printf("%d\n",weight[adj[u][i].first]);
            }
        }
        
    }
    // sort(weight,weight+30000+1);
    // printf("shdg\n");
    return l;
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1;tc <= t; tc++)
    {
        // for(int i = 0; i < 300001; i++){
        //     adj[i].clear();
        // }
        int n;
        scanf("%d", &n);
        int u, v, w;
        for (int i = 0; i < 30001; i++)
        {
            adj[i].clear();
        }
        
        for (int i = 0; i < n -1; i++)
        {
            scanf("%d %d %d", &u, &v, &w);
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        // printf("shf\n");
        int ans = -1; 
        int m = bfs(0);
        int p = bfs(m);
        sort(weight,weight+30001);
        printf("Case %d: %d\n",tc,weight[30000]);
    }
    
}