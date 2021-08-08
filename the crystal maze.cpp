#include <bits/stdc++.h>
using namespace std;
int m,n, q;
char arr[501][501];
bool vis[501][501];
int dp[501][501];
int bfs(int c,int d)
{
    memset(vis,false,sizeof(vis));
    vis[c][d] = true;
    int cnt = 0;
    if(dp[c][d]!=-1)return dp[c][d];
    queue<pair<int,int>>a;
    a.push({c,d});
    int u;
    int v;
    while (!a.empty())
    {
        u = a.front().first;
        v = a.front().second;
        a.pop();
        if(u+1 <= m &&!vis[u+1][v] && arr[u+1][v] !='#'){
            if(arr[u+1][v]=='C'){
                cnt++;
                // printf("%d %d\n",u+1,v);
            }
            vis[u+1][v] = true;
            a.push({u+1,v});
        }
        if(u-1 >= 1 &&!vis[u-1][v] && arr[u-1][v] !='#'){
            if(arr[u-1][v]=='C'){
                cnt++;
                // printf("%d %d\n",u-1,v);
            }
            vis[u-1][v] = true;
            a.push({u-1,v});
        }
        if(v-1 >= 1 &&!vis[u][v-1] && arr[u][v-1] !='#'){
            if(arr[u][v-1]=='C'){
                cnt++;
                // printf("%d %d\n",u,v-1);
            }
            vis[u][v-1] = true;
            a.push({u,v-1});
        }
        if(v+1 <= n &&!vis[u][v+1] && arr[u][v+1] !='#'){
            if(arr[u][v+1]=='C'){
                cnt++;
                // printf("%d %d\n",u,v+1);
            }
            vis[u][v+1] = true;
            a.push({u,v+1});
        }
    }
    // printf("%d\n",cnt);
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(vis[i][j]){
                dp[i][j] = cnt;
            }
        }
        
    }
    return dp[c][d];

}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t;tc++)
    {
       for(int i = 0; i < 501; i++)
        {
            for(int j = 0; j < 501; j++){
                dp[i][j] = -1;
            }
        }
        // printf("%d\n",dp[100][100]);
        // int m, n, q;
        scanf("%d %d %d", &m, &n, &q);
        getchar();
        for (int i = 1; i <= m; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                scanf("%c", &arr[i][j]);
            }
            getchar();
        }
        int u, v;
        printf("Case %d:\n",tc);
        while (q--)
        {
            scanf("%d %d", &u, &v);
            printf("%d\n",bfs(u,v));
        }
        
        
    }
}