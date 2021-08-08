#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>adj[100000];
long long int dis[100000];
bool vis[100000];
//For the shortest path itself-- we can use an array predecessor which except for s, contains the penultimate 
//element of the shortest path.
//then the path would be v,p[v],p[p[v]],...........,s
//reversing it will give us the forward path
int path[100000];
void dijikstra(int s)
{
    memset(vis,false,sizeof(vis));
    for (int i = 0; i < 100000; i++)
    {
        dis[i] = INFINITY;
    }
    dis[s] = 0;
    path[s] = s;
    priority_queue<pair<long long int , int>>pq;
    pq.push({-dis[s],s});
    while (!pq.empty())
    {
        int a = pq.top().second;
        pq.pop();
        if(vis[a])continue;
        vis[a] = true;
        for (int i = 0; i < adj[a].size(); i++)
        {
            int b = adj[a][i].first;
            int w = adj[a][i].second;
            if(dis[a]+w < dis[b]){
                path[b] = a;
                dis[b] = dis[a]+w;
                pq.push({-dis[b],b});
            }

        }
        
    }
    
}
void path_printer(int s,int n){
    for (int i = 0; i < n; i++)
    {
        int v = path[i];
        vector<int>pa;
        pa.push_back(i);
        while (v!=s)
        {
            pa.push_back(v);
            v = path[v];
        }
        pa.push_back(s);
        reverse(pa.begin(),pa.end());
        for (int i = 0; i < pa.size(); i++)
        {
            printf("%d ",pa[i]);
        }
        printf("\n");
    }
    
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int u,v,w;
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d %d", &u, &v, &w);
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    dijikstra(1);
    printf("%lld\n",dis[n]);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%lld\n",dis[i]);
    // }
    // path_printer(0,n-1);

}