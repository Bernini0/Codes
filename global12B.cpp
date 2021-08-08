#include <bits/stdc++.h>
using namespace std;
vector<int>adj[101];
bool vis[101];
int dis[101];
int n;
pair<int,int>arr[101];
int bfs(int i)
{
    vis[i] = true;
    queue<pair<int,int>>q;
    q.push({arr[i].first,arr[i].second});
    int u, v;
    while (!q.empty())
    {
        u = q.front().first;
        v = q.front().second;
        q.pop();
        for (int j = 0; j < adj[i].size(); j++)
        {
            if(!vis[adj[i][j]]){
                vis[adj[i][j]] = true;
                dis[adj[i][j]] = dis[i]+1;
            }
        }
        
    }
    int max = -1;
    for (int i = 0; i < n; i++)
    {
        if(!vis[i]){
            return INT_MAX;
        }
        else
        {
            if(max < dis[i]){
                max = dis[i];
            }
        }
    }
    return max;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int k;
        for (int i = 0; i < 101; i++)
        {
            adj[i].clear();
        }
        
        scanf("%d %d", &n, &k);
        int u, v;
        
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d",&arr[i].first, &arr[i].second);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(j==i)continue;
                else{
                    if(abs(arr[i].first-arr[j].first)+abs(arr[i].second-arr[j].second) <= k)
                    {
                        adj[i].push_back(j);
                        adj[j].push_back(i);
                    }
                }
            }
            
        }
        int ans =INT_MAX;
        for (int i = 0; i < n; i++)
        {
            memset(vis,false,sizeof(vis));
            memset(dis,0,sizeof(dis));
            ans = min(ans,bfs(i));
        }
        if(ans == INT_MAX)ans = -1;
        printf("%d\n",ans);
        
    }
    
}