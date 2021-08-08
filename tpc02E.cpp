#include <bits/stdc++.h>
using namespace std;
vector<int>adj[100000+1];
int indegree[100000+1];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        for (int i = 0; i <= n; i++)
        {
            adj[i].clear();
        }
        memset(indegree,0,sizeof(indegree));
        while (m--)
        {
            int u,v;
            scanf("%d %d", &u, &v);
            adj[u].push_back(v);
            adj[v].push_back(u);
            indegree[u]++;
            indegree[v]++;
        }
        set<pair<int,int>>s;
        for (int i = 1; i <= n; i++)
        {
            s.insert({indegree[i],i});
        }
        bool vis[n+1];
        memset(vis,false,sizeof(vis));
        vector<int>ans;
        while (!s.empty())
        {
            pair<int,int>a;
            a = *(s.rbegin());
            s.erase(a);
            if(vis[a.second])continue;
            vis[a.second] = true;
            ans.push_back(a.second);
            for(int i:adj[a.second]){
                if(!vis[i]){
                    vis[i] = true;
                    s.erase({indegree[i],i});
                }
            }
        }
        printf("%d\n",ans.size());
        for (int i = 0; i < ans.size()-1; i++)
        {
            printf("%d ",ans[i]);
        }
        printf("%d\n",ans[ans.size()-1]);
    }
    
}