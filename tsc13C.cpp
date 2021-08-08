#include <bits/stdc++.h>
using namespace std;
int r, c;
bool check(int u, int v){
    if(u < 0 || v < 0 || u >= r || v >= c){
        return false;
    }
    return true;
}
int dis[101][101];
int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};
int maxi = -1;
void dfs(int u, int v,int p){
    dis[u][v] = min(dis[u][v],p);
    // printf("%d %d\n",u,v);
    for (int i = 0; i < 4; i++)
    {
        if(check(u+dx[i],v+dy[i]) && dis[u+dx[i]][v+dy[i]] > p+1){
            dfs(u+dx[i],v+dy[i],p+1);
            // printf("%d %d\n",u+dx[i],v+dy[i]);
        }
    }
    
}
int main()
{
    int n;
    scanf("%d %d %d", &r, &c, &n);
    vector<pair<int,int>>points;
    int u,v;
    for (int i = 0; i < 101; i++)
    {
        for(int j = 0; j < 101; j++){
            dis[i][j] = 10000000;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &u, &v);
        dfs(u-1,v-1,0);
    }
    for (int i = 0; i < r; i++)
    {
        for(int j =  0; j < c; j++){
            // printf("%d ",dis[i][j]);
            maxi = max(maxi,dis[i][j]);
        }
        // printf("\n");
    }
    printf("%d\n",maxi+1);

}