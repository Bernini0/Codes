#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100000 + 1];
vector<pair<int, int>> ans;
int dfs_start_time[100000 + 1];
int dfs_end_time[100000 + 1];
int dfstime = 0;
bool vis[100000 + 1];
int low[100000 + 1];
void dfs(int u, int parent = -1)
{
    dfstime++;
    dfs_start_time[u] = dfstime;
    low[u] = dfstime;
    vis[u] = true;
    for (int i = 0; i < adj[u].size(); i++)
    {
        int v = adj[u][i];
        if (v == parent)
            continue;
        if (vis[v])
        {
            low[u] = min(low[u], dfs_start_time[v]);
        }
        if (!vis[v])
        {
            dfs(v, u);
            low[u] = min(low[u], low[v]);
            if (low[v] > dfs_start_time[u])
            {
                ans.push_back({min(u, v), max(u, v)});
            }
        }
    }
    dfs_end_time[u] = dfstime;
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        ans.clear();
        for (int i = 0; i <= 100000; i++)
        {
            adj[i].clear();
        }
        memset(vis, false, sizeof(vis));
        int n;
        scanf("%d", &n);
        // vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            int u, v;
            char k[10];
            scanf("%d %s", &u, k);
            int p = atoi(k + 1);
            while (p--)
            {
                scanf("%d", &v);
                adj[u].push_back(v);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
                dfs(i);
        }
        sort(ans.begin(),ans.end());
        printf("Case %d:\n",tc);
        printf("%d critical links\n", ans.size());
        for (int i = 0; i < ans.size(); i++)
        {
            printf("%d - %d\n", ans[i].first, ans[i].second);
        }
    }
}