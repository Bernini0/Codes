#include <bits/stdc++.h>
using namespace std;
int arr1[500][500];
int arr2[500][500];
int dp[501][501][12];
int n,m;
int DP(int u, int v, int k){
    if(k <= 0)return 0;
    if(dp[u][v][k]!=-1)return dp[u][v][k];
    int a = 1000000000, b = 1000000000, c = 1000000000, d = 1000000000;
    if(u-1>= 0){
        a = arr2[u-1][v]+DP(u-1,v,k-1);
    }
    if(u+1< n){
        b = arr2[u][v]+DP(u+1,v,k-1);
    }
    if(v-1>=0){
        c = arr1[u][v-1]+DP(u,v-1,k-1);
    }
    if(v+1<m){
        d = arr1[u][v]+DP(u,v+1,k-1);
    }
    dp[u][v][k] = min(a,min(b,min(c,d)));
    return dp[u][v][k];
}
int main()
{
    int k;
    scanf("%d %d %d", &n, &m, &k);
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j <  m-1; j++){
            int a;
            scanf("%d", &a);
            arr1[i][j] = a;
        }
    }
    for(int i = 0; i < n-1; i++){
        for(int j = 0;j < m; j++){
            int a;
            scanf("%d", &a);
            arr2[i][j] = a;
        }
    }
    memset(dp,-1,sizeof(dp));
    if(k&1){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                printf("-1 ");
            }
            printf("\n");
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++){
                printf("%d ",2*DP(i,j,k/2));
            }
            printf("\n");
        }
        
    }
    
}