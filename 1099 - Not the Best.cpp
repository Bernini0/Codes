#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>adj[5000+1];
int dis[5001];
bool vis[5001];
vector<pair<int,int>>path(5001);
void dijikstra(int s,int n,int x, int y,int p)
{
    memset(vis,false,sizeof(vis));
    for (int i = 0; i < 5001; i++)
    {
        dis[i] = 200000000;
    }
    dis[s] = 0;
    path[s].first = s;
    path[s].second = 0;
    priority_queue<pair<int,int>>pq;
    pq.push({-dis[s],s});
    while (!pq.empty())
    {
        int a = pq.top().second;
        pq.pop();
        if(vis[a])continue;
        vis[a] = true;
        for (int i = 0; i < adj[a].size(); i++)
        {
            int b = adj[a][i].first;
            int w = adj[a][i].second;
            if((b==x&&a==y && w==p) || (a==x && b==y && w==p))continue;
            if(dis[b] > dis[a]+w){
                path[b].first = a;
                path[b].second = w;
                dis[b] = dis[a] + w;
                // printf("%d\n",dis[b]);
                pq.push({-dis[b],b});
            }
            
        }
    }
    // printf("\n");
}
vector<pair<int,pair<int,int>>>lala;
void finder(int n){
    lala.push_back({n,{path[n]}});
    int i;
    for (i = path[n].first; i != 1; i = path[i].first)
    {
        lala.push_back({i,path[i]});
    }
}
int dis2[5001];
void dijikstra2(int s)
{
    memset(vis,false,sizeof(vis));
    for (int i = 0; i < 5001; i++)
    {
        dis2[i] = 200000000;
    }
    dis2[s] = 0;
    priority_queue<pair<int,int>>pq;
    path[s].first = 100000000;
    pq.push({-dis2[s],s});
    while (!pq.empty())
    {
        int a = pq.top().second;
        pq.pop();
        if(vis[a])continue;
        vis[a] = true;
        for (int i = 0; i < adj[a].size(); i++)
        {
            int b = adj[a][i].first;
            int w = adj[a][i].second;
            if(dis2[b] > dis2[a]+w){
                dis2[b] = dis2[a] + w;
                path[b].first = min(path[a].first,w);
                pq.push({-dis[b],b});
            }
        }
        
    }
    
}

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc  <= t; tc++)
    {
        // ans.clear();
        for (int i = 0; i < 5001; i++)
        {
            adj[i].clear();
        }
        
        int n, r;
        scanf("%d %d", &n, &r);
        int u, v, w;
        vector<int>k;
        k.push_back(200000000);
        for (int i = 0; i < r; i++)
        {
            scanf("%d %d %d", &u, &v, &w);
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
            if(u==n || v==n || u==1 || v==1){
                k.push_back(w);
            }
        }
        sort(k.begin(),k.end());
        lala.clear();
        dijikstra(1,n,-1,-1,-1);
        int p = dis[n];
        finder(n);
        int p2 = 1000000000;
        // printf("lala size()----> %d\n",lala.size());
        for (int i = 0; i < lala.size(); i++)
        {
            // printf("lalas----> %d %d %d\n",lala[i].first,lala[i].second.first,lala[i].second.second);
            dijikstra(1,n,lala[i].first,lala[i].second.first,lala[i].second.second);
            int temp = p2;
            p2 = min(p2,dis[n]);
            if(p2==p){
                p2 = temp;
            }
            // printf("p2------>   %d\n",p2);
        }
        
        dijikstra2(1);
        // sort(ans.begin(),ans.end());
        // ans.erase(unique(ans.begin(),ans.end()),ans.end());
        // printf("p---> %d p2----> %d\n",p,p2);
        path[n].first = min(path[n].first,k[0]);
        if(n==1){
            printf("Case %d: %d\n",tc,path[n].first);
            continue;
        }
        if(p+2*path[n].first <= p2){
            printf("Case %d: %d\n",tc,p+2*path[n].first);
        }
        else
        {
            printf("Case %d: %d\n",tc,p2);
        }
        
        // for (int i = 0; i < ans.size(); i++)
        // {
        //     printf("%d ",ans[i]);
        // }
        // printf("\n");
        
        // printf("%d %d\n",dis2[n],path[n]);
        
    }
}