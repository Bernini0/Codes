//To visit all node we can simply touch minimum number of node by using topological sort.
//OR just find the number of SCC
#include <bits/stdc++.h>
using namespace std;
vector<int> adj[10001];
vector<int>adj2[10001];
vector<int>pos;
bool vis[10001];
void dfs1(int n)
{
    vis[n] = true;
    for (int i = 0; i < adj[n].size(); i++)
    {
        if (!vis[adj[n][i]])
            dfs1(adj[n][i]);
    }
    pos.push_back(n);
}
int dfs2(int n)
{
    vis[n] = true;
    for (int i = 0; i < adj[n].size(); i++)
    {
        if (!vis[adj[n][i]])
            dfs2(adj[n][i]);
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        for (int i = 0; i < 10001; i++)
        {
            adj[i].clear();
        }
        pos.clear();
        int n, m;
        scanf("%d %d", &n, &m);
        int u, v;
        while (m--)
        {
            scanf("%d %d", &u, &v);
            adj[u].push_back(v);
            adj2[v].push_back(u);
        }
        memset(vis, false, sizeof(vis));
        for (int i = 1; i <= n; i++)
        {
            if (!vis[i]){
                dfs1(i);
                // pos.push_back(i);
            }
        }
        for (int i = 0; i < pos.size(); i++)
        {
            printf("%d ",pos[i]);
        }
        printf("\n");
        reverse(pos.begin(),pos.end());
        memset(vis, false, sizeof(vis));
        int cnt = 0;
        for (int i = 0; i < pos.size(); i++)
        {
            int a = pos[i];
            if (!vis[a])
            {
                dfs2(a);
                cnt++;
            }
        }
        printf("Case %d: %d\n", tc, cnt);
    }
}