#include <bits/stdc++.h>
using namespace std;
bool vis[2000+1][2000+1];
long long int arr[2000+1][2000+1];
long long int ans = -1;
pair<int,int>pos;
int n;
void bfs(int u, int v)
{
    queue<pair<int,int>>q;
    q.push({u,v});
    int i, j;
    while (!q.empty())
    {
        i = q.front().first;
        j = q.front().second;
        q.pop();
        if(!vis[i][j]){
            vis[i][j] = true;
            if(ans < arr[i][j]){
                ans = arr[i][j];
                pos.first = i;
                pos.second = j;
            }
            if(i+1 < n && j+1 < n && !vis[i+1][j+1]){
                q.push({i+1,j+1});
            }
            if(i-1>= 0 && j-1 >= 0 &&!vis[i-1][j-1]){
                q.push({i-1,j-1});
            }
            if(i+2 < n && !vis[i+2][j]){
                q.push({i+2,j});
            }
            if(i-2 >= 0 && !vis[i-2][j]){
                q.push({i-2,j});
            }
            if(j-2 >= 0 && !vis[i][j-2]){
                q.push({i,j-2});
            }
            if(j+2 < n && !vis[i][j+2]){
                q.push({i,j+2});
            }
        }
    }
    
}
int main()
{
    // int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++){
            scanf("%lld", &arr[i][j]);
        }
    }
    // long long int arr2[n][n];
    long long int r1[2*n-1];
    long long int  r2[2*n-1];
    memset(r1,0,sizeof(r1));
    memset(r2,0,sizeof(r2));
    // memset(arr2,0,sizeof(arr2));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            r1[i+j] += arr[i][j];
            r2[i-j+n-1] += arr[i][j];
        }
    }
    long long int maximum = -1;
    int r,s;
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            arr[i][j] = r1[j+i]+r2[i-j+n-1] - arr[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
    bfs(0,0);
    maximum = ans;
    r = pos.first;
    s = pos.second;
    ans = -1;
    bfs(1,0);
    printf("%lld\n",ans+maximum);
    printf("%d %d ",r+1,s+1);
    printf("%d %d\n",pos.first+1,pos.second+1);
}