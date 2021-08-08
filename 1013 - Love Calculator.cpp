#include <bits/stdc++.h>
using namespace std;
string a, b;
long long int dp[31][31][62];
int cnt;
long long int DP(int i, int j,int k)
{
    if(i==a.size() && j==b.size() && k==cnt)return 1;
    if(i==a.size() && j== b.size() && k != cnt)return 0;
    if(dp[i][j][k]!=-1)return dp[i][j][k];
    if(i==a.size()){
        dp[i][j][k] = DP(i,j+1,k+1);
    }
    else if(j == b.size())
    {
        dp[i][j][k] = DP(i+1,j,k+1);
    }
    else{
        if(a[i]==b[j]){
            dp[i][j][k] = DP(i+1,j+1,k+1);
        }
        else
        {
            dp[i][j][k] = DP(i+1,j,k+1)+DP(i,j+1,k+1);
        }
    }
    return dp[i][j][k];
}
long long int dp1[31][31];
long long int DP1(int i, int j)
{
    if(i==a.size() && j==b.size())return 0;
    if(dp1[i][j]!=INT_MAX)return dp1[i][j];
    if(i==a.size()){
        dp1[i][j] = DP1(i,j+1)+1;
        // printf("%d\n",dp1[i][j]);
    }
    
    else if(j == b.size())
    {
        dp1[i][j] = DP1(i+1,j)+1;
        // printf("%d\n",dp1[i][j]);
    }
    else{
        if(a[i]==b[j]){
            dp1[i][j] = DP1(i+1,j+1)+1;
            // printf("%d\n",dp1[i][j]);
        }
        else
        {
            dp1[i][j] = min(DP1(i+1,j)+1,DP1(i,j+1)+1);
            // printf("%d\n",dp1[i][j]);
        }
    }
    return dp1[i][j];
}
int main()
{
    int t;
    cin >> t;
    for(int tc = 1; tc <= t; tc++)
    {
        memset(dp,-1,sizeof(dp));
        cin >> a >> b;
        for (int i = 0; i < 31; i++)
        {
            for (int j = 0; j < 31; j++)
            {
                dp1[i][j] = INT_MAX;
            }
            
        }
        cnt = DP1(0,0);
        // printf("%d\n",cnt);
        long long int ans = DP(0,0,0);
        printf("Case %d: %d %lld\n",tc, cnt, ans);
    }
}