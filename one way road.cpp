/*
lightoj-1049
idea is roads are in a circle.so every city has two roads connected to it.
if we select 1 city and run bfs/dfs clockwise and counter clockwise 
(if a road oppose our direction then change it's direction)minimum them will be the ans


Another way is to make the cost directed and then run bfs/dfs on undirected graph
*/
#include <bits/stdc++.h>
using namespace std;
bool vis[101];
vector<pair<pair<int, int>, int>> adj[101];
int bfs(int a)
{
    int cnt = 0;
    queue<int> q;
    int ans = 0;
    q.push(a);
    vis[a] = true;
    int v = 1;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int i = 0; i < adj[u].size(); i++)
        {
            if (adj[u][i].first.first == u && adj[u][i].first.second != v)
            {
                if (!vis[adj[u][i].first.second])
                {
                    vis[adj[u][i].first.second] = true;
                    q.push(adj[u][i].first.second);
                    cnt++;
                }
            }
            else if(adj[u][i].first.second==u && adj[u][i].first.first != v)
            {
                if (!vis[adj[u][i].first.first])
                {
                    ans += adj[u][i].second;
                    cnt++;
                    vis[adj[u][i].first.first] = true;
                    q.push(adj[u][i].first.first);
                }
            }
        }
        v = u;
    }
    return ans;
}
int main()
{
    int t;
    scanf("%d", &t);
    int arr[2];
    // int k =0;
    for (int tc = 1; tc <= t; tc++)
    {
        int k = 0;
        int n;
        scanf("%d", &n);
        int u, v, w;
        for (int i = 0; i < 101; i++)
        {
            adj[i].clear();
        }
        
        memset(vis,false,sizeof(vis));
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d %d", &u, &v, &w);
            adj[u].push_back({{u, v}, w});
            adj[v].push_back({{u, v}, w});
            if (u == 1)
            {
                arr[k] = v;
                k++;
            }
            if (v == 1)
            {
                arr[k] = u;
                k++;
            }
        }
        int c = bfs(arr[0]);
        for (int i = 0; i < adj[1].size(); i++)
        {
            if(adj[1][i].first.first == 1 && adj[1][i].first.second == arr[0]){
                break;
            }
            else if(adj[1][i].first.second == 1 && adj[1][i].first.first==arr[0]){
                c+=adj[1][i].second;
            }
        }
        memset(vis,false,sizeof(vis));
        int d = bfs(arr[1]);
        for (int i = 0; i < adj[1].size(); i++)
        {
            if(adj[1][i].first.first == 1 && adj[1][i].first.second == arr[1]){
                break;
            }
            else if(adj[1][i].first.second == 1 && adj[1][i].first.first==arr[1]){
                d+=adj[1][i].second;
            }
        }
        printf("Case %d: %d\n",tc,min(c,d));
    }
}