#include <bits/stdc++.h>
using namespace std;
long long int dp[100][3];
long long int arr[100][3];
int n;
long long int DP(int a, int k,int l, int m)
{
    if(a >= n)return 0;
    else if(dp[a][k]!=-1)return dp[a][k];
    else{
        
            long long int x = DP(a+1,0,l,m+l)+arr[a][0]+m;
            long long int y = DP(a+1,1,arr[a][1]+l,m+l);
            long long int z = DP(a+1,2,l,m+arr[a][2]+l);
            dp[a][k] = max(x,max(y,z));
            printf("%d\n",dp[a][k]);
        
    }
    return dp[a][k];
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        // int n;
        scanf("%d", &n);
        memset(dp,-1,sizeof(dp));
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
        }
        long long int ans = DP(0,0,0,0);
        printf("%lld\n",ans);
    }
    
}