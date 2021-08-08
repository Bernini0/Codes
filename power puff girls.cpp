#include <bits/stdc++.h>
using namespace std;
char arr[22][22];
bool vis[22][22];
// int gen[22][22];
int r, c;
int bfs(int u,int v){
    int cnt = 0;
    queue<pair<int,int>>q;
    q.push({u,v});
    vis[u][v] = true;
    vector <pair<int,int>>a;
    while (!q.empty())
    {
        pair<int,int>p;
        p = q.front();
        u = p.first;
        v = p.second;
        q.pop();
        // printf("%d\n",cnt);
        if(u-1 >= 0 && !vis[u-1][v] && (arr[u-1][v]!='#' && arr[u-1][v]!= 'm')){
            if(arr[u-1][v]=='h')return cnt+1;
            else{
                a.push_back(make_pair(u-1,v));
                vis[u-1][v] = true;
                // printf("1 %d %d\n",u-1,v);
            }
        }
        if(u+1 < r && !vis[u+1][v] && (arr[u+1][v]!='#' && arr[u+1][v]!= 'm')){
            if(arr[u+1][v]=='h')return cnt+1;
            else{
                a.push_back({u+1,v});
                vis[u+1][v] = true;
                // printf("2 %d %d\n",u+1,v);
            }
        }
        if(v-1 >= 0 && !vis[u][v-1] && (arr[u][v-1]!='#' && arr[u][v-1]!= 'm')){
            if(arr[u][v-1]=='h') return cnt+1;
            else{
                a.push_back({u,v-1});
                vis[u][v-1] = true;
                // printf("3 %d %d\n",u,v-1);
            }
        }
        if(v+1 < c && !vis[u][v+1] && (arr[u][v+1]!='#' && arr[u][v+1]!= 'm')){
            if(arr[u][v+1]=='h')return cnt+1;
            else{
                a.push_back({u,v+1});
                vis[u][v+1] = true;
                // printf("4 %d %d\n",u,v+1);
            }
        }
        if(q.empty()){
            cnt++;
            for (int i = 0; i < a.size(); i++)
            {
                q.push(a[i]);
            }
            
        }
    }
    return cnt;
}
int main()
{
    int  t;
    scanf("%d", &t);
    for(int tc = 1;tc <= t; tc++){
        // int r, c;
        scanf("%d %d", &r, &c);
        getchar();
        int u1,v1,u2,v2,u3,v3;
        for (int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++){
                scanf("%c", &arr[i][j]);
                if(arr[i][j]=='a'){
                    u1= i;
                    v1 = j;
                }
                else if(arr[i][j]=='b'){
                    u2 = i; 
                    v2 = j;
                }
                else if(arr[i][j]=='c'){
                    u3 = i;
                    v3 = j;
                }
            }
            getchar();
        }
        // printf("%c\n",arr[0][0]);
        // for (int i = 0; i < r; i++)
        // {
        //     for(int j = 0; j < c; j++){
        //     printf("%c",arr[i][j]);
        //     }
        //     printf("\n");
        // }
        memset(vis,false,sizeof(vis));
        int ans = bfs(u1,v1);
        memset(vis,false,sizeof(vis));
        ans = max(ans,bfs(u2,v2));
        memset(vis,false,sizeof(vis));
        ans = max (ans,bfs(u3,v3));
        printf("Case %d: %d\n",tc,ans);

    }
}