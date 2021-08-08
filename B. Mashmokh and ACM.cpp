#include <bits/stdc++.h>
using namespace std;
long long int n,k;
long long int dp[2000+1][2000+1];
int mod = 1000000000+7;
int DP(long long int a,int pos)
{
    if(pos==k)return 1;
    if(dp[a][pos]!=-1)return dp[a][pos];
    
        long long int ret = 0;
        for (int i = 1; i*a <= n; i++)
        {
            ret += DP(i*a,pos+1)%mod;
            ret = ret%mod;
        }
        dp[a][pos] = ret;
    return dp[a][pos];
}
int main()
{
    // int n;
    scanf("%d %d", &n, &k);
    memset(dp,-1,sizeof(dp));
    int ans = DP(1,0);
    printf("%d\n",ans);
}