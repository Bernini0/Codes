#include <bits/stdc++.h>
using namespace std;
int parent[100005];
int rnk[100005];
int cnt;
int find_set(int a)
{
    if(parent[a]==a)return a;
    return parent[a] = find_set(parent[a]);

}
void union_set(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if(a!=b){
        cnt--;
        if(rnk[a] < rnk[b]){
            swap(a,b);
        }
        parent[b] = a;
        if(rnk[a]==rnk[b]){
            rnk[a]++;
        }
    }
}
int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < 100005; i++)
    {
        parent[i] = i;
        rnk[i] = 0;
    }
    vector<pair<int,int>>edges(m);
    int u,v;
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &u, &v);
        edges[i].first = u-1;
        edges[i].second = v-1;
    }
    int q;
    scanf("%d", &q);
    int arr[q];
    bool vis[m];
    memset(vis,false,sizeof(vis));
    for (int i = 0; i < q; i++)
    {
        scanf("%d", &arr[i]);
        vis[arr[i]-1] = true;
    }
    cnt = n;
    for (int i = 0; i < m; i++)
    {
        if(!vis[i]){
            union_set(edges[i].first,edges[i].second);
        }
    }
    vector<int>ans;
    ans.push_back(cnt);
    for (int i = q-1; i >= 1 ; i--)
    {
        union_set(edges[arr[i]-1].first,edges[arr[i]-1].second);
        ans.push_back(cnt);
    }
    reverse(ans.begin(),ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        printf("%d ",ans[i]);
    }
    printf("\n");
    
}