#include <bits/stdc++.h>
using namespace std;
char arr[500][500];
bool vis[500][500];
int dx[] ={1,0,-1,0};
int dy[] = {0,1,0,-1};
int n, m;
bool check(int u, int v)
{
    if(u < 0 || u >= n || v < 0 || v>= m || vis[u][v] || arr[u][v]=='#')return false;
    else return true;
}
void bfs(int u, int v, int cnt)
{
    vis[u][v] = true;
    cnt--;
    if(cnt == 0)return;
    queue<pair<int,int>>q;
    q.push({u,v});
    while (!q.empty())
    {
        u = q.front().first;
        v = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int u2 = u+dx[i];
            int v2 = v+dy[i];
            if(check(u2,v2)){
                q.push({u2,v2});
                vis[u2][v2] = true;
                cnt--;
                if(cnt==0)break;
            }
        }
        if(cnt == 0)break;
    }
    
}
int main()
{
    int k;
    scanf("%d %d %d", &n, &m, &k);
    getchar();
    int u, v;
    int cnt = 0;
    memset(vis,false,sizeof(vis));
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%c", &arr[i][j]);
            if(arr[i][j]=='.'){
                u = i;
                v = j;
                cnt++;
            }
        }
        getchar();
    }
    bfs(u,v,cnt-k);
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr[i][j]=='#'){
                printf("%c",arr[i][j]); 
            }
            else if(arr[i][j]=='.' && vis[i][j]){
                printf("%c",arr[i][j]);
            }
            else
            {
                printf("X");
            }
        }
        printf("\n");
    }
    
}