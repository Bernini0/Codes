#include <bits/stdc++.h>
using namespace std;
vector<pair<pair<int,int>,int>> weight;
vector<pair<pair<int,int>,int>> weight2;
int arr[101][101];
int arr2[101][101];
int p[101];
int n;
int find(int x){
    if(p[x]==x)return x;
    return p[x] = find(p[x]);
}
typedef struct edge
{
    int u,v,w;
};
bool operator<(edge a, edge b){
    return a.w <b.w;
}
vector<edge>e;
int kruscal()
{
    sort(e.begin(),e.end());
    int sz = e.size();
    int ans = 0;
    for (int i = 0; i < sz; i++)
    {
        if(find(e[i].u)!=find(e[i].v)){
            p[p[e[i].u]] = p[e[i].v];
            ans+=e[i].w;
        }
    }
    return ans;
}
void f(vector<pair<pair<int,int>,int>>& arr){
    e.clear();
    for (int i = 0; i < arr.size(); i++)
    {
        edge a;
        a.u = arr[i].first.first;
        a.v = arr[i].first.second;
        a.w = arr[i].second;
        e.push_back(a);
    }
    for (int i = 0; i < 101; i++)
    {
        p[i] = i;
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        weight.clear();
        weight2.clear();
        // int n;
        scanf("%d", &n);
        int u, v, w;
        bool vis[101][101];
        for (int i = 0; i < 101; i++)
        {
            for(int j = 0; j < 101; j++){
                arr[i][j] = 1000000;
                arr2[i][j] = -10000000;
            }
        }
        memset(vis, false, sizeof(vis));
        while (scanf("%d %d %d", &u, &v, &w))
        {
            if (v == 0 && u == 0 && w == 0)
                break;
            edge a;
            a.u = u;
            a.v = v;
            a.w = w;
            e.push_back(a);
            if (!vis[u][v])
            {
                arr[u][v] = arr[v][u] = w;
                arr2[v][u] = arr2[u][v] = w; 
            }
            else
            {
                arr[u][v] = arr[v][u] = min(arr[u][v], w);
                arr2[u][v] = arr2[v][u] = max(arr2[u][v], w);
            }
            vis[u][v] = vis[v][u] = true;
        }
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                if (arr[i][j] < 1000000)
                {
                    weight.push_back({{i,j},arr[i][j]});
                    weight.push_back({{j,i},arr[i][j]});
                }
                if(arr2[i][j] >= 0){
                    weight2.push_back({{i,j},arr2[i][j]*(-1)});
                    weight2.push_back({{j,i},arr2[i][j]*(-1)});
                }
            }
        }
        f(weight);
        int ans = kruscal();
        // printf("%d\n",ans);
        f(weight2);
        ans += kruscal()*(-1);
        if(ans%2){
            printf("Case %d: %d/2\n",tc,ans);
        }
        else
        {
            printf("Case %d: %d\n",tc, ans/2);
        }
    }
}