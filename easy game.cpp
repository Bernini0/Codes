#include <bits/stdc++.h>
using namespace std;
int n;
int arr[100];
int dp[100][100];
int DP(int x, int y){
    if(y < x || x >= n || y < 0)return 0;
    if(dp[x][y]!= -1)return dp[x][y];
    else
    {
        int res = -1000000000;
        int sum = 0;
        for (int i = x; i <= y; i++)
        {
            sum += arr[i];
            int b = DP(i+1,y);
            res = max(res,sum-b);
        }
        sum = 0;
        for (int i = y; i >= x; i--)
        {
            sum += arr[i];
            int b = DP(x,i-1);
            res = max(res,sum-b);
        }
        dp[x][y] = res;
    }
    return dp[x][y];
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        memset(dp,-1,sizeof(dp));
        for (int i = 0; i < n; i++)
        {
            dp[i][i] = arr[i];
        }
        int ans = DP(0,n-1);
        printf("Case %d: %d\n",tc, ans);
    }
}