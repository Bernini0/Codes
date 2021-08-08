#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100000 + 1];
vector<pair<int, int>> ans;
int dfs_start_time[100000 + 1];
int dfs_end_time[100000 + 1];
int dfstime = 0;
bool vis[100000 + 1];
int low[100000 + 1];
bool vis2[1001][1001];
void dfs(int u, int p = -1)
{
    vis[u] = true;
    dfstime++;
    dfs_start_time[u] = low[u] = dfstime;
    for (int i = 0; i < adj[u].size(); i++)
    {
        int v = adj[u][i];
        if(v==p)continue;
        
        if(!vis2[u][v])
        {
            printf("%d %d\n",u,v);
            vis2[u][v] = vis2[v][u] = true;
        }
        if(vis[v]){
            low[u] = min(low[u],dfs_start_time[v]);
            continue;
        }
        dfs(v,u);
        low[u] = min(low[u],low[v]);
        if(low[v] > dfs_start_time[u]){
            printf("%d %d\n", v,u);
        }
    }
    
}
int main()
{
    int n, m;
    int t = 1;
    while (scanf("%d %d", &n, &m) && n != 0 && m != 0)
    {
        dfstime = 0;
        ans.clear();
        for (int i = 0; i <= 100000; i++)
        {
            adj[i].clear();
        }
        memset(vis, false, sizeof(vis));
        memset(vis2, false, sizeof(vis2));
        for (int i = 0; i < m; i++)
        {
            int u, v;
            scanf("%d %d", &u, &v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        printf("%d\n\n", t);
        t++;
        dfs(1);
        // int arr[n + 1];
        // memset(arr, 0, sizeof(arr));
        // for (int i = 1; i <= n; i++)
        // {
        //     arr[i] = adj[i].size();
        // }
        // vector<pair<int, int>> pp;
        // for (int i = 0; i < ans.size(); i++)
        // {
        //     // printf("sjkadf\n");
        //     pp.push_back({ans[i].first, ans[i].second});
        //     pp.push_back({ans[i].second, ans[i].first});
        //     vis2[ans[i].first][ans[i].second] = true;
        //     vis2[ans[i].second][ans[i].first] = true;
        //     arr[ans[i].first]--;
        //     arr[ans[i].second]--;
        // }
        // bool direction[1000 + 1];
        // memset(direction, false, sizeof(direction));
        // for (int i = 1; i <= n; i++)
        // {
        //     // bool lala = false;
        //     for (int j = 0; j < adj[i].size(); j++)
        //     {
        //         int v = adj[i][j];
        //         if (vis2[i][v] || (arr[v] <= 1 && !direction[v]))
        //             continue;
        //         if (arr[i] <= 0)
        //             break;
        //         else if (!direction[i])
        //         {
        //             pp.push_back({v,i});
        //             vis2[v][i] = true;
        //             vis2[i][v] = true;
        //             arr[v]--;
        //             arr[i]--;
        //             direction[i] = true;
        //         }
        //         else if (direction[i])
        //         {
        //             pp.push_back({i,v});
        //             vis2[i][v] = vis2[v][i] = true;
        //             arr[v]--;
        //             arr[i]--;
        //             direction[v] = true;
        //         }
        //     }
        // }
        // sort(pp.begin(),pp.end());
        // for (int i = 0; i < pp.size(); i++)
        // {
        //     printf("%d %d\n",pp[i].first,pp[i].second);
        // }
        printf("#\n");
    }
}