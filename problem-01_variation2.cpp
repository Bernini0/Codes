#include <bits/stdc++.h>
using namespace std;
int arr[1001];
int n;
int dp[1001][2];
int DP(int pos,int sign)
{
    if(pos==n)return 0;
    if(dp[pos][sign%2]!=-1)return dp[pos][sign%2];
    else{
        if(sign%2==0)
        {
            dp[pos][sign%2] = max(DP(pos+1,sign),DP(pos+1,sign+1)+arr[pos]);
            // printf("%d\n",dp[pos][sign%2]);
        }
        else
        {
            dp[pos][sign%2] = max(DP(pos+1,sign),DP(pos+1,sign+1)-arr[pos]);
            // printf("%d\n",dp[pos][sign%2]);
        }
    }
    return dp[pos][sign%2];
}
int main()
{
    // int n;
    scanf("%d", &n);
    memset(dp,-1,sizeof(dp));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ans = DP(0,0);
    printf("%d\n",ans);
}