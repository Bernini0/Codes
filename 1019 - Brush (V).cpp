#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj[100 + 1];
int dis[101];
bool vis[101];
void dijikstra(int s)
{
    memset(vis,false,sizeof(vis));
    for (int i = 0; i <= 100; i++)
    {
        dis[i] = 200000000;
    }
    dis[s] = 0;
    priority_queue<pair<int, int>> pq;
    pq.push({-dis[s], s});
    while (!pq.empty())
    {
        int a = pq.top().second;
        pq.pop();
        if(vis[a])continue;
        vis[a] =  true;
        for (int i = 0; i < adj[a].size(); i++)
        {
            int b = adj[a][i].first;
            int w = adj[a][i].second;
            if (dis[b] > dis[a] + w)
            {
                dis[b] = dis[a] + w;
                // printf("%d\n",dis[b]);
                pq.push({-dis[b], b});
            }
        }
    }
}
vector<pair<int,int>>edge;
vector<int>weight;
void floyed_warshall(int s,int n)
{
    for (int i = 0; i < 101; i++)
    {
        dis[i] = 200000000;
    }
    dis[s] = 0;
    for (int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < edge.size(); j++)
        {
            if(dis[edge[j].second] > dis[edge[j].first]+weight[j]){
                dis[edge[j].second] = dis[edge[j].first]+weight[j];
            }
         }
    }
    
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        edge.clear();
        weight.clear();
        for (int i = 0; i < 101; i++)
        {
            adj[i].clear();
        }
        int n, m;
        scanf("%d %d", &n, &m);
        int u, v, w;
        for (int i = 0; i < m; i++)
        {
            scanf("%d %d %d", &u, &v, &w);
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
            edge.push_back({u,v});
            edge.push_back({v,u});
            weight.push_back(w);
            weight.push_back(w);
     }
        // dijikstra(1);
        floyed_warshall(1,n);
        if (dis[n] == 200000000)
        {
            printf("Case %d: Impossible\n", tc);
        }
        else
        {
            printf("Case %d: %d\n", tc, dis[n]);
        }
    }
}