#include <bits/stdc++.h>
using namespace std;
vector<int>adj[1001];
int arr[1001];
bool vis[1001];
int avg;
bool bfs(int s)
{
    if (vis[s]) return true;
    vis[s] = true;
    queue<int>q;
    q.push(s);
    int k = 1;
    int u;
    int ans = arr[s];
    while (!q.empty())
    {
        u = q.front();
        q.pop();
        // k++;
        for (int i = 0; i < adj[u].size(); i++)
        {
            if(!vis[adj[u][i]]){
                vis[adj[u][i]] = true;
                ans += arr[adj[u][i]];
                k++;
                q.push(adj[u][i]);
            }
        }
    }
    if(ans/k==avg && ans%k==0){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int r = 0;
    int t;
    r++;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        for(int i = 0 ;i < 1001; i++){
            adj[i].clear();
        }
        int n;
        scanf("%d", &n);
        int ans = 0;
        int m;
        r++;
        scanf("%d", &m);
        for(int i = 1 ; i <= n; i++)
        {
            scanf("%d", &arr[i]);
            ans+= arr[i];
        }
        r++;
        
        avg = ans/n;
        int u,v;
        while (m--)
        {
            scanf("%d %d", &u, &v);
            adj[u].push_back(v);
            adj[v].push_back(u);
            r++;
        }
        if(ans%n!=0){
            printf("Case %d: No\n",tc);
            continue;
        }
        memset(vis,false,sizeof(vis));
        bool f =false;
        for (int i = 1; i <= n; i++)
        {
            if(!bfs(i)){
                printf("Case %d: No\n",tc);
                f = true;
                break;
            }
        }
        if(!f){
            printf("Case %d: Yes\n",tc);
        }
    }
    // printf("%d\n",r);
}