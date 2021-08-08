#include <bits/stdc++.h>
using namespace std;
vector<int>adj[100];
bool vis1[100];
bool vis2[100];
vector<vector<int>>dis(2,vector<int>(100,0));
int cnt = 0;
int k = 0;
int d;
void bfs(int s)
{
    // vector<int>list;
    queue<int>q;
    q.push(s);
    vis2[s] = true;
    while(!q.empty()){
        int  u = q.front();
        q.pop();
        for (int i = 0; i < adj[u].size(); i++)
        {
            if(!vis2[adj[u][i]]){
                q.push(adj[u][i]);
                dis[k][adj[u][i]] = dis[k][u]+1;
                vis2[adj[u][i]] = true;
            }
        }
        
    }

}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        int n;
        scanf("%d", &n);
        int r;
        scanf("%d", &r);
        int u, v;
        for(int i= 0; i < 100; i++){
            adj[i].clear();
        }
        for (int i = 0; i < r; i++)
        {
            scanf("%d %d", &u, &v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for(int i = 0; i <2; i++){
            for(int j = 0; j < 100; j++){
                dis[i][j] = 0;
            }
        }
        int s;
        scanf("%d %d", &s, &d);
        memset(vis2,false,sizeof(vis2));
        k = 0;
        // memset(dis,0,sizeof(dis));
        bfs(s);
        k++;
        memset(vis2,false,sizeof(vis2));
        bfs(d);
        for (int i = 0; i < n; i++)
        {
            // printf("%d %d\n",dis[0][i],dis[1][i]);
            dis[0][i] += dis[1][i];
            
        }
        sort(dis[0].begin(),dis[0].end());
        printf("Case %d: %d\n",tc,dis[0][dis[0].size()-1]);
    }
    
}