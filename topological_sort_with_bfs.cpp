#include <bits/stdc++.h>
using namespace std;
int indegree[10001];
vector<int>adj[10001];
vector<int> topological_sort(int n){//topological sort with cycle detection using bfs
    queue<int>q;
    for (int i = 1; i <= n; i++)
    {
        if(indegree[i]==0)q.push(i);
    }
    vector<int>sorted_topologically;
    bool vis[10001];
    memset(vis,0,sizeof(vis));
    while (!q.empty())
    {
        int a = q.front();
        q.pop();
        for (int i = 0; i < adj[a].size(); i++)
        {
            int b = adj[a][i];
            indegree[b]--;
            if(indegree[b]==0)q.push(b);
        }
        sorted_topologically.push_back(a);
    }
    for (int i = 1; i <= n; i++)
    {
        if(indegree[i]> 0){
            sorted_topologically.clear();
        }
    }
    return sorted_topologically;
}
vector<bool>visited;
vector<int>ans;
void dfs(int v) {//dfs function
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u])
            dfs(u);
    }
    ans.push_back(v);
}
void topological_sort2(int n) {//topological sort without cycle detection using dfs
    visited.assign(n+1, false);
    ans.clear();
    for (int i = 1; i <= n; ++i) {
        if (!visited[i])
            dfs(i);
    }
    reverse(ans.begin(), ans.end());
}
int vis[10001];
vector<int>ans2;
bool no = false;
void topological_sort3(int n)//topological sort with cycle detection using dfs
{
    vis[n] = 1;
    for(int x : adj[n]){
        if(vis[x]==1){
            no = true;
        }
        else if(vis[x]==0){
            topological_sort3(x);
        }
    }
    vis[n] = 2;
    ans2.push_back(n);
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    memset(indegree,0,sizeof(indegree));
    while (m--)
    {
        int u, v;
        scanf("%d %d", &u, &v);
        indegree[v]++;
        adj[u].push_back(v);
    }
    vector<int>arr;
    arr = topological_sort(n);
    topological_sort2(n);
    memset(vis,0,sizeof(vis));
    for (int i = 1; i <= n; i++)
    {
        if(vis[i]<2 && !no)topological_sort3(i);
    }
}