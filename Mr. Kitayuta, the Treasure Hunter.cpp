#include <bits/stdc++.h>
using namespace std;
int n;
int dp[30000+1][3];
int cnt[30000+1];
int DP(int k, int i, int prev)
{
    if(k > n)return 0;
    if(dp[k][i]!=-1)return dp[k][i];
    else
    {
        int c = DP(k+k-prev+1,2,k);
        int d = DP(k+k-prev,1,k);
        int e = INT_MIN;
        if(k-prev>1){
            e = DP(k+k-prev-1,0,k);
        }
        dp[k][i] = max(c,max(d,e))+cnt[k];
        printf("%d __%d__%d\n",k,i,dp[k][i]);
    }
    return dp[k][i];
}


int main()
{
    int d;
    scanf("%d %d", &n, &d);
    int arr[n];
    memset(cnt, 0, sizeof(cnt));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        cnt[arr[i]]++;
    }
    n = arr[n-1];
    printf("%d\n",cnt[30]);
    memset(dp, -1, sizeof(dp));
    int ans = DP(d, 0, 0);
    printf("%d\n", ans);
}