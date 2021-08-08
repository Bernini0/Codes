#include <bits/stdc++.h>
using namespace std;
int arr[17][17];
int dp[17][1<<17];
int f(int i, int mask, int& n)
{
    if(i==n)return 0;
    if(dp[i][mask]!= -1)return dp[i][mask];
    int ans = INT_MIN;
    for(int j = 0; j < n; j++)
    {
        if(mask&(1<<j))
        {
            ans = max(ans,(arr[j][i]+f(i+1,mask^(1<<j),n)));
        }
    }
    return dp[i][mask] = ans;
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1;tc <=t ; tc++)
    {
        int n;
        scanf("%d",&n);
        memset(dp,-1,sizeof(dp));
        for (int i = 0; i < n; i++)
        {
            for(int j = 0; j< n; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }
        int ans = f(0,(1<<n) -1, n);
        printf("Case %d: %d\n",tc,ans);
    }
}