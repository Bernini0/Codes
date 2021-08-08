#include <bits/stdc++.h>
//could also use set instead of queqe
using namespace std;
vector<int>adj[1001];
int indegree[1001];
int rnk[1001];
vector<pair<int,int>>ans;
void topological_sort(int n){
    queue<pair<int,int>>q;
    for (int i = 0; i < n; i++)
    {
        if(indegree[i]==0){
            q.push({1,i});
            rnk[i] = 1;
        }
    }
    while (!q.empty())
    {
        pair<int,int> a = q.front();
        q.pop();
        for(int i : adj[a.second]){
            indegree[i]--;
            if(indegree[i]==0){
                q.push({a.first+1,i});
                // rnk[i] = rnk[a]+1;
            }
        }
        ans.push_back({a.first,a.second});
    }
    
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc<= t; tc++)
    {
        ans.clear();
        memset(indegree,0,sizeof(indegree));
        for (int i = 0; i < 1001; i++)
        {
            adj[i].clear();
        }
        int n, r;
        scanf("%d %d", &n, &r);
        int u, v;
        while (r--)
        {
            scanf("%d %d", &u, &v);
            adj[v].push_back(u);
        }
        for (int i = 0; i < n; i++)
        {
            sort(adj[i].begin(),adj[i].end());
            for(int j : adj[i]){
                indegree[j]++;
            }
        }
        topological_sort(n);
        printf("Scenario #%d:\n",tc);
        sort(ans.begin(),ans.end());
        for (int i = 0; i < ans.size(); i++)
        {
            printf("%d %d\n",ans[i].first,ans[i].second);
        }
        
    }
}