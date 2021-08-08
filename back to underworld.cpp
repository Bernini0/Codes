#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// bool vis[20000 + 1];
vector<int> adj[20000 + 1];
int arr[20000 + 1];
// int k = 0;

ll bfs(int s)
{
    // bool vampires = false, lycans = false;
    queue <int> q;
    q.push(s);
    ll v = 0, l = 0;
    arr[s] = 1;
    v++;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int i = 0; i < adj[u].size(); i++)
        {
            if(arr[adj[u][i]]==0){
                q.push(adj[u][i]);
                if(arr[u]==1){
                    arr[adj[u][i]] = -1;
                    l++;
                }
                else if(arr[u]==-1){
                    arr[adj[u][i]] = 1;
                    v++;
                }
            }
        }
        
    }
    return max(v,l);
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        for(int i= 0; i < 20001; i++)adj[i].clear();
        int n;
        scanf("%d", &n);
        while (n--)
        {
            int u, v;
            scanf("%d %d", &u, &v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        ll ans = 0;
        // memset(vis,false,sizeof(vis));
        memset(arr,0,sizeof(arr));
        for (int i = 0; i < 20001; i++)
        {
            if(arr[i]==0 && adj[i].size()!=0){
                ans += bfs(i);
            }
        }
        printf("Case %d: %lld\n",tc,ans);
    }
}