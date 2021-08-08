#include <bits/stdc++.h>
using namespace std;
vector<int>adj1[100000+1];
vector<int>adj2[100000+1];
bool vis[100000+1];
vector<int>lst;
void dfs1(int v){
    if(vis[v])return;
    vis[v] = true;
    for (int i = 0; i < adj1[v].size(); i++)
    {
        if(!vis[adj1[v][i]]){
            dfs1(adj1[v][i]);
        }
    }
    lst.push_back(v);
}
vector<int>scc[100000+1];
int j = 0;
void dfs2(int v)
{
    if(vis[v])return;
    vis[v] = true;
    for (int i = 0; i < adj2[v].size(); i++)
    {
        if(!vis[adj2[v][i]]){
        dfs2(adj2[v][i]);
        }
    }
    scc[j].push_back(v);
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
    memset(vis,false,sizeof(vis));
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &u, &v);
        adj1[u].push_back(v);
        adj2[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
    {
        if(!vis[i])dfs1(i);
    }
    reverse(lst.begin(),lst.end());
    memset(vis,false,sizeof(vis));
    for (int i = 0; i < lst.size(); i++)
    {
        if(!vis[lst[i]]){
            dfs2(lst[i]);
            j++;
        }
    }
    long long int ans = 0;
    long long int ans1 = 1;
    int mod = 1000000000+7;
    for (int i = 0; i < j; i++)
    {
        int min = 2000000000;
        int cnt = 1;
        for (int k = 0; k < scc[i].size(); k++)
        {
            // printf("scc-----> %d ",scc[i][k]);
            if(min > arr[scc[i][k]]){
                min = arr[scc[i][k]];
                cnt = 1;
            }
            else if(min == arr[scc[i][k]]){
                cnt++;
            }
        }
        // printf("\n");
        ans+= min;
        ans1*= cnt;
        if(ans1>=mod)ans1%=mod;
    }
    
    printf("%lld %lld\n",ans,ans1);
}