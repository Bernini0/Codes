#include <bits/stdc++.h>
using namespace std;
char arr[100][100];
bool vis[100][100];
int w;
int h;
int cnt;
void dfs(int u, int v){
    vis[u][v] = true;
    if(u-1 >= 0 && !vis[u-1][v] && arr[u-1][v]=='.'){
        cnt++;
        // printf("%d %d\n", u-1,v);
        dfs(u-1,v);
    
    }
    if(u+1 < h && !vis[u+1][v] && arr[u+1][v]=='.'){
        cnt++;
        // printf("%d %d\n", u+1,v);
        dfs(u+1,v);
        
    }
    if(v-1 >=0 && !vis[u][v-1] && arr[u][v-1]=='.'){
        cnt++;
        // printf("%d %d\n", u,v-1);
        dfs(u,v-1);
    }
    if(v+1 < w && !vis[u][v+1] && arr[u][v+1]=='.'){
        cnt++;
        // printf("%d %d\n", u,v+1);
        dfs(u,v+1);
        
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        // int w, h;
        scanf("%d %d", &w, &h);
        getchar();
        int u, v;
        for (int i = 0; i < h; i++)
        {
            for(int j = 0; j < w; j++){
                scanf("%c", &arr[i][j]);
                if(arr[i][j]=='@'){
                    u = i;v = j;
                }
            }
            getchar();
        }
        memset(vis,false,sizeof(vis));
        vis[u][v] = true;
        cnt = 1;
        dfs(u,v);
        printf("Case %d: %d\n",tc,cnt);
    }
    
}