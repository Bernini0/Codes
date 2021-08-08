#include <bits/stdc++.h>
using namespace std;
char arr[11][11];
bool vis[11][11];
int dis[11][11];
int n;
vector<pair<char,pair<int,int>>>abc;
int bfs(int u, int v,int w, int x,char c)
{
    // printf("%d %d\n",);
    memset(vis,false,sizeof(vis));
    memset(dis,0,sizeof(dis));
    vis[u][v] = true;
    queue<pair<int,int>>q;
    q.push({u,v});
    while (!q.empty())
    {
        u = q.front().first;
        v = q.front().second;
        // printf("%d %d\n",u,v);
        q.pop();
        if(u+1 < n && !vis[u+1][v] && (arr[u+1][v]=='.' || arr[u+1][v]== c)){
            vis[u+1][v] = true;
            dis[u+1][v] = dis[u][v]+1;
            q.push({u+1,v});
            if(vis[w][x]){
                arr[w][x] ='.';
                return dis[w][x];
            }
        }
        if(u-1 >= 0 && !vis[u-1][v] && (arr[u-1][v]=='.' || arr[u-1][v]== c)){
            vis[u-1][v] = true;
            dis[u-1][v] = dis[u][v]+1;
            q.push({u-1,v});
            if(vis[w][x]){
                arr[w][x] ='.';
                return dis[w][x];
            }
        }
        if(v+1 < n && !vis[u][v+1] && (arr[u][v+1]=='.' || arr[u][v+1]== c)){
            vis[u][v+1] = true;
            dis[u][v+1] = dis[u][v]+1;
            q.push({u,v+1});
            if(vis[w][x]){
                arr[w][x] ='.';
                return dis[w][x];
            }
        }
        if(v-1 >= 0 && !vis[u][v-1] && (arr[u][v-1]=='.' || arr[u][v-1]== c)){
            vis[u][v-1] = true;
            dis[u][v-1] = dis[u][v]+1;
            q.push({u,v-1});
            if(vis[w][x]){
                arr[w][x] ='.';
                return dis[w][x];
            }
        }
    }
    if(!vis[w][x])return -1;
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        abc.clear();
        // int n;
        scanf("%d", &n);
        getchar();
        int k = 0;
        // int u, v;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                scanf("%c", &arr[i][j]);
                if(arr[i][j]-65 >=0){
                    k++;
                    abc.push_back({arr[i][j],{i,j}});
                }
                // if(arr[i][j]-65==0){
                //     u = i;
                //     v = j;
                // }
            }
            getchar();
        }
        sort(abc.begin(),abc.end());

        if(k==1){
            printf("Case %d: 0\n",tc);
            continue;
        }
        int d;
        int ans = 0;
        bool no = false;
        // printf("%d\n",abc.size());
        arr[abc[0].second.first][abc[0].second.second] = '.';
        for (int i = 0; i < abc.size()-1; i++)
        {
            // printf("%c\n",abc[i+1].first);
            d = bfs(abc[i].second.first,abc[i].second.second,abc[i+1].second.first,abc[i+1].second.second,abc[i+1].first);
            // printf("%d\n",d);
            if(d==-1){
                printf("Case %d: Impossible\n",tc);
                no = true;
                break;
            }
            else{
                ans += d;
            }
        }
        if(!no){
            printf("Case %d: %d\n",tc,ans);
        }
        
        // for(int i = 0; i < n; i++)
        // {
        //     for(int j = 0; j < n; j++)
        //     {
        //         printf("%c", arr[i][j]);
        //     }
        //     printf("\n");
        // }
    }
}