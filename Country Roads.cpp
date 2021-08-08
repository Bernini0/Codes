#include <bits/stdc++.h>
using namespace std;
int dis[500];
bool vis[500];
vector<pair<int, int>> adj[500];
void dijikstra(int s)
{
    memset(vis, false, sizeof(vis));
    for (int i = 0; i < 500; i++)
    {
        dis[i] = 2147483647;
    }
    dis[s] = 0;
    priority_queue<pair<int, int>> pq;
    pq.push({-dis[s], s});
    while (!pq.empty())
    {
        int a = pq.top().second;
        pq.pop();
        if (vis[a])
            continue;
        vis[a] = true;
        for (int i = 0; i < adj[a].size(); i++)
        {
            int b = adj[a][i].first;
            int w = adj[a][i].second;
            if (dis[b] > max(w,dis[a]))
            {
                // printf("%d %d\n",b, w);
                dis[b] = max(w,dis[a]);
                pq.push({-dis[b], b});
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
        int n, m;
        scanf("%d %d", &n, &m);
        int u, v, w;
        for (int i = 0; i < 500; i++)
        {
            adj[i].clear();
        }
        
        for (int i = 0; i < m; i++)
        {
            scanf("%d %d %d", &u, &v, &w);
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        int s;
        scanf("%d", &s);
        dijikstra(s);
        printf("Case %d:\n",tc);
        for (int i = 0; i < n; i++)
        {
            if (dis[i] == 2147483647)
            {
                printf("Impossible\n");
            }
            else
            {
                printf("%d\n", dis[i]);
            }
        }
    }
}