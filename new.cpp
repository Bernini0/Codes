#include <bits/stdc++.h>
using namespace std;
vector<int>adj[7];
vector<int>v;
void bfs(int source){
    queue<int>q;
    q.push(source);
    bool vis[7];
    memset(vis,false,sizeof(vis));
    v.push_back(source);
    vis[source] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int i = 0; i < adj[u].size(); i++)
        {
            if(!vis[adj[u][i]]){
                v.push_back(adj[u][i]);
                vis[adj[u][i]] = true;
                q.push(adj[u][i]);
            }
        }
        
    }
    
}
int main()
{
    int n = 18;
    int x, y;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bfs(0);
    for (int i = 0; i < v.size(); i++)
    {
        printf("%d ",v[i]);
    }
    printf("\n");
}