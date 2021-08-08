#include <bits/stdc++.h>
using namespace std;
vector<int> adj[10001];
bool vis[1001];
int v[1001][1001];
int cnt = 0;
void bfs(int k, int n,int j){
    memset(vis,false, sizeof(vis));
    queue<int>q;
    q.push(k);
    vis[k] = true;
    // vector<int>v;
    v[j][k] = 1;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int i = 0; i < adj[u].size(); i++)
        {
            if(!vis[adj[u][i]]){
                vis[adj[u][i]] = true;
                q.push(adj[u][i]);
                v[j][adj[u][i]]= 1;
            }
        }
        
    }
    
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        cnt = 0;
        int k, n, m;
        scanf("%d %d %d", &k, &n, &m);
        int u, w;
        // scanf("%d %d", &u, &v);
        memset(v,0,sizeof(v));
        int arr[k];
        for(int i = 0; i < k; i++){
            scanf("%d", &arr[i]);
        }
        for(int i = 0; i < 1001; i++){
            adj[i].clear();
        }
        while (m--)
        {
            scanf("%d %d", &u, &w);
            adj[u].push_back(w);
        }
        for (int i = 0; i < k; i++)
        {
            bfs(arr[i],n,i);
        }
        for (int i = 1; i <= n ; i++)
        {
            bool no = false;
            for(int j = 0; j < k; j++){
                if(!v[j][i]){
                    no = true;
                    break;
                }
            }
            if(!no){
                cnt++;
            }
        }
        printf("Case %d: %d\n",tc,cnt);
    }
    
}