#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj[100000 + 1];
bool vis[100000 + 1];
int arr[100000 + 1];
int cnt = 0;
void dfs(int a, int c)
{
    if (vis[a])
        return;
    vis[a] = true;

    if (adj[a].size() == 1)
    {
        arr[c] = 1;
    }
    for (int i = 0; i < adj[a].size(); i++)
    {
        dfs(adj[a][i].first, adj[a][i].second);
    }
}
int main()
{

    int u, v,u1,v1;

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d %d", &u, &v);
        if(i==0){
            v1 = v;
            u1 = u;
        }
        adj[u].push_back({v, i + 1});
        adj[v].push_back({u, i + 1});
    }
    memset(vis, false, sizeof(vis));
    memset(arr, 0, sizeof(arr));
    int k = n;
    dfs(u1, 1);
    for (int i = 1; i <= n - 1; i++)
    {
        if (arr[i])
        {
            printf("%d\n", cnt);
            cnt++;
        }
        else
        {
            printf("%d\n", k - 2);
            k--;
        }
    }
}