#include <bits/stdc++.h>
using namespace std;
vector<int>adj[10000+1];
int vis[10000+1];
vector<int>ans;
bool no = false;
void topological_sort(int n)
{
    vis[n] = 1;
    for(int i:adj[n]){
        if(vis[i]==1)no = true;
        else if(vis[i]==0)topological_sort(i);
    }
    vis[n] = 2;
    ans.push_back(n);
}
int indegree[10001];

vector<int> topological_sort2(int n){
    priority_queue<int>q;
    vector<int>ans2;
    for (int i = 1; i <= n; i++)
    {
        if(indegree[i]==0)q.push(i*(-1));
    }
    while (!q.empty())
    {
        int a  = q.top()*(-1);
        // printf("%d\n",a);
        // vector<int>v;
        q.pop();
        for(int i:adj[a]){
            indegree[i]--;
            if(indegree[i]==0){
                q.push(i*(-1));
            }
        }
        ans2.push_back(a);
    }
    for (int i = 1; i <= n; i++)
    {
        if(indegree[i] > 0){
            ans2.clear();
            return ans2;
        }
    }
    return ans2;
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    memset(indegree,0,sizeof(indegree));
    while (m--)
    {
        int u,v;
        scanf("%d %d", &u, &v);
        adj[u].push_back(v);
        indegree[v]++;
    }
    vector<int>a;
    a = topological_sort2(n);
    if(a.size()==0){
        printf("Sandro fails.\n");
    }
    else
    {
        for (int i = 0; i < a.size(); i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}