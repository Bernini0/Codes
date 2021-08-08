#include <bits/stdc++.h>
using namespace std;
vector<int>adj[101];
int indegree[101];
bool vis[101];
vector<int>ans;
void dfs(int n){
    vis[n] = true;
    for (int i:adj[n])
    {
        if(!vis[i])dfs(i);
    }
    ans.push_back(n);
}
vector<int> topological_sort(int n){
    queue<int>q;
    for (int i = 1; i <= n; i++)
    {
        if(indegree[i]== 0)q.push(i);
    }
    vector<int>ans2;
    while (!q.empty())
    {
        int a = q.front();
        q.pop();
        for(int i : adj[a]){
            indegree[i]--;
            if(indegree[i]==0)q.push(i);
        }
        ans2.push_back(a);
    }
    return ans2;
}
int main()
{
    int n, m;
    while (scanf("%d %d", &n, &m))
    {
        if(n==0 && m==0)break;
        for (int i = 0; i < 101; i++)
        {
            adj[i].clear();
        }
        memset(indegree,0,sizeof(indegree));
        ans.clear();
        while (m--)
        {
            int u ,v;
            scanf("%d %d", &u ,&v);
            adj[u].push_back(v);
            indegree[v]++;
        }
        // memset(vis,false,sizeof(false));
        // for (int i = 1; i <= n; i++)
        // {
        //     if(!vis[i]){
        //         dfs(i);
        //     }
        // }
        vector<int>arr;
        arr = topological_sort(n);
        for (int i = 0; i < arr.size()-1; i++)
        {
            printf("%d ",arr[i]);
        }
        printf("%d\n",arr[arr.size()-1]);
        // for (int i = ans.size()-1; i > 0; i--)
        // {
        //     printf("%d ",ans[i]);
        // }
        // printf("%d\n",ans[0]);
    }
    
}