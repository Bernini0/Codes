#include <bits/stdc++.h>
using namespace std;
int arr[1001];
int dp[1001][1001];
int n;
long long int DP(int pos,int cont)
{
    if(pos==n)return 0;
    if(dp[pos][cont]!=-1)return dp[pos][cont];
    else{
        dp[pos][cont] = max(DP(pos+1,cont),DP(pos+1,cont+1)+(cont*arr[pos]));
        // printf("%d\n",dp[pos][cont]);
    }
    return dp[pos][cont];
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
    long long int ans = DP(0,1);
    printf("%lld\n",ans);
}