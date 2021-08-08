#include <bits/stdc++.h>
using namespace std;
vector<int>adj[100000];
bool vis[100000];
void bfs()
{
    for (int i = 0; i < n; i++)
    {
        /* code */
    }
    
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int u, v;
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &u, &v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
}