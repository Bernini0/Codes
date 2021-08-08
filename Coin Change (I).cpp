#include <bits/stdc++.h>
using namespace std;
int coins[50];
int amount[50];
int n;
long long int mod = 100000000+7;
long long int dp[1000+1][50];
long long int f(int k, int l){
    if(k < 0)return 0;
    
    if(k==0)return 1;
    if(l==n)return 0;
    if(dp[k][l]!=-1)return dp[k][l];
    dp[k][l] = 0;
    for (int i = 0; i <= amount[l]; i++)
    {
        int a = f(k-(coins[l]*i),l+1);
        dp[k][l] += a;
        dp[k][l]%=mod;
        // printf("k----> %d coin-----> %d way-----> %d\n",k-(coins[l]*i),l+1,a);
    }
    // printf("%d\n",dp[k][l]);
    return dp[k][l];
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        // int n;
        int k;
        scanf("%d %d", &n , &k);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &coins[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &amount[i]);
        }
        memset(dp,-1,sizeof(dp));
        int ans = f(k,0);
        printf("Case %d: %d\n",tc,ans);
        
    }
}