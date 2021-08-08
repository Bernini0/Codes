#include <bits/stdc++.h>
using namespace std;
vector<int>adj[100000+1];
bool vis[100000+1];
vector<pair<int,vector<int>>>va[100000+1];
int edge_id[100000+1];
void dfs_with_stack(int u)
{
    memset(vis,false,sizeof(vis));
    memset(edge_id,0,sizeof(edge_id));
    stack<int>s;
    stack<int>t;
    s.push(u);
    t.push(u);
    while (!s.empty())
    {
        u = s.top();
        s.pop();
        while (edge_id[u] < adj[u].size())
        {
            int v = adj[u][edge_id[u]];
            edge_id[u]++;
            if(!vis[v]){
                vis[v] = 1;
                t.push(v);
                s.push(u);
                s.push(v);
                break;
            }
            else
            {
                vector<int>lala;
                lala.push_back(v);
                int k = -1;
                while (k!=v)
                {
                    lala.push_back(t.top());
                    t.pop();
                }
                va[v].push_back({lala.size(),lala});
                for (int i = 0; i <lala.size(); i++)
                {
                    t.push(lala[i]);
                }
                
            }
            
        }
        
    }
    
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n+1];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int m;
    scanf("%d", &m);
    int u, v;
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &u, &v);
        adj[u].push_back(v);
    }
    
}