#include <bits/stdc++.h>
using namespace std;
char arr[1005][1005];
bool vis[1005][1005];
int disfire[1005][1005];
int disrun[1005][1005];
int n, m;
void bfs()
{
        memset(vis,false,sizeof(vis));
    memset(disfire,-1,sizeof(disfire));
    queue<pair<int,int>>q;
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++){
            if(arr[i][j]=='F'){
                disfire[i][j] = 0;
                q.push({i,j});
            }
        }
    }

    vis[q.front().first][q.front().second] = true;
    int u, v;
    while (!q.empty())
    {
        u = q.front().first;
        v = q.front().second;
        q.pop();
        // printf("1---- %d %d\n",u,v);
        if(u-1 >= 0 && !vis[u-1][v] && arr[u-1][v]!= '#'){
            vis[u-1][v] = true;
            disfire[u-1][v] = disfire[u][v]+1;
            q.push({u-1,v});
        }
        if(u+1 < n && !vis[u+1][v] && arr[u+1][v] !='#'){
            vis[u+1][v] = true;
            disfire[u+1][v] = disfire[u][v]+1;
            q.push({u+1,v});
        }
        if(v-1 >= 0 && !vis[u][v-1] && arr[u][v-1]!='#'){
            vis[u][v-1] = true;
            disfire[u][v-1] = disfire[u][v]+1;
            q.push({u,v-1});
        }
        if(v+1 <m && !vis[u][v+1] && arr[u][v+1]!= '#'){
            vis[u][v+1] = true;
            disfire[u][v+1] = disfire[u][v]+1;
            q.push({u,v+1});
        }
    }
    
}
void bfs2(int a,int b)
{
    memset(vis,false,sizeof(vis));
    memset(disrun,0,sizeof(disrun));
    vis[a][b] = true;
    queue<pair<int,int>>q;
    q.push({a,b});
    int u, v;
    while (!q.empty())
    {
        u = q.front().first;
        v = q.front().second;
        q.pop();
        // printf("%d %d\n",u,v);
        if(u-1 >= 0 && !vis[u-1][v] && arr[u-1][v]!= '#' && disrun[u][v]+1 < disfire[u-1][v]){
            vis[u-1][v] = true;
            disrun[u-1][v] = disrun[u][v]+1;
            q.push({u-1,v});
        }
        if(u+1 < n && !vis[u+1][v] && arr[u+1][v] !='#' && disrun[u][v]+1 < disfire[u+1][v]){
            vis[u+1][v] = true;
            disrun[u+1][v] = disrun[u][v]+1;
            q.push({u+1,v});
        }
        if(v-1 >= 0 && !vis[u][v-1] && arr[u][v-1]!='#' && disrun[u][v]+1 < disfire[u][v-1]){
            vis[u][v-1] = true;
            disrun[u][v-1] = disrun[u][v]+1;
            q.push({u,v-1});
        }
        if(v+1 <m && !vis[u][v+1] && arr[u][v+1]!= '#' && disrun[u][v]+1 < disfire[u][v+1]){
            vis[u][v+1] = true;
            disrun[u][v+1] = disrun[u][v]+1;
            q.push({u,v+1});
        }
        if(arr[u][v]=='E'){
            printf("Y\n");
            return;
        }
    }
    printf("N\n");
    return;

}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        // int n, m;
        int s1,s2,e1,e2,f1,f2;
        scanf("%d %d", &n, &m);
        getchar();
        for (int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++){
                scanf("%c", &arr[i][j]);
                if(arr[i][j]=='S'){
                    s1 = i;
                    s2 = j;
                }
                else if(arr[i][j]=='E'){
                    e1 = i;
                    e2 = j;
                }
                else if(arr[i][j]=='F'){
                    f1 = i;
                    f2 = j;
                }
            }
            getchar();
        }
        bfs();
        bfs2(s1,s2);
        // for (int i = 0; i < n; i++)
        // {
        //     for(int j = 0; j < m; j++)
        //     {
        //         printf("%d %d\n",disrun[i][j],disfire[i][j]);
        //     }
        // }
        
    }
    
}