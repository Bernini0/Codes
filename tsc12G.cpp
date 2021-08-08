#include <bits/stdc++.h>
using namespace std;
int n;
vector<int>adj[3*100000+1];
long long int count(int i){
    bool vis[3*100000+1];
    memset(vis,false,sizeof(vis));
    vis[i] = true;
    for (int j = 0; j < adj[i].size(); j++)
    {
        vis[adj[i][j]] = true;
    }
    long long int cnt = 0;
    for(int j = 0; j < adj[i].size();j++){
        for(int k = 0; k < adj[adj[i][j]].size();k++){
            if(!vis[adj[adj[i][j]][k]]){
                cnt++;
                // printf("%d %d %d\n",i, adj[i][j],adj[adj[i][j]][k]);
            }
        }
    }
    return cnt;
}
int main()
{
    // int n;
    scanf("%d", &n);
    int u,v;
    vector<pair<int,int>>roads;
    for (int i = 0; i < n-1; i++)
    {
        scanf("%d %d", &u, &v);
        if(u > v)swap(u,v);
        // adj[u].push_back(v);
        // adj[v].push_back(u);
        roads.push_back({u,v});
    }
    sort(roads.begin(),roads.end());
    adj[roads[0].first].push_back(roads[0].second);
    adj[roads[0].second].push_back(roads[0].first);
    for (int i = 1; i < n-1; i++)
    {
        if(roads[i].first==roads[i-1].first && roads[i].second==roads[i-1].second){
            continue;
        }
        else
        {
            adj[roads[i].first].push_back(roads[i].second);
            adj[roads[i].second].push_back(roads[i].first);
        }
        
    }
    
    long long int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += count(i);
    }
    printf("%lld\n",ans);

}