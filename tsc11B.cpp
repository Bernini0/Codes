#include <bits/stdc++.h>
using namespace std;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};
int mini = 100000000;
bool chech(int u, int v,int r, int c, vector<vector<char>>&arr){
    if(u < 0 || u >= r || v < 0 || v >= c || arr[u][v] == '#'){
        return false;
    }
    return true;
}
int dfs(int i,int f, vector<vector<char>>&arr, vector<vector<bool>>&vis,int r, int c){
    int cnt = 1;
    vis[i][f] = true;
    for (int j = 0; j < 4; j++)
    {
        if(chech(i+dx[j],f+dy[j],r,c,arr)&&!vis[i+dx[j]][f+dy[j]]){
            if(arr[i+dx[j]][f+dy[j]]=='@'){
                cnt += 100000000;
            }
            else{
                cnt++;
            }
            cnt+=dfs(i+dx[j],f+dy[j],arr,vis,r,c);
        }
    }
    mini = min(mini,cnt);
}
int main()
{
    int u, v;
    scanf("%d %d", &u, &v);
    getchar();
    vector<vector<char>>arr(u,vector<char>(v));
    for (int i = 0; i < u; i++)
    {
        for(int j = 0; j < v; j++){
            scanf("%c", &arr[i][j]);
        }
        getchar();
    }
    vector<vector<bool>>vis(u,vector<bool>(v,false));
    int ans = dfs(0,0,arr,vis,u,v);
    printf("%d\n",ans);
}