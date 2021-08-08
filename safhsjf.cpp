#include <bits/stdc++.h>
using namespace std;
int dp[30001][3];
int n;
int cnt[30000+1];
set<int> s;
int DP(int k, int i)
{
    if (k > 30000)
        return 0;
    if (dp[k][i] != 0)
        return dp[k][i];
    if(i==1){
    int c = DP(k + k/2 + 1, 2);
    int d = DP(k + k/2, 1);
    int e = DP(k + k/2 - 1, 0);
    c = max(c, d);
    c = max(c, e);
    dp[k][i] = c+cnt[k];
    }
    else if(i==2){
        int c = DP(k+(k-1)/2+1,1);
        int d = DP(k+(k-1)/2,0);
        int e = DP(k+(k-1)/2+2,2);
        c = max(c,d);
        c = max(c,e);
        dp[k][i] = c+cnt[k];
    }
    else if(i==0)
    {
        int c = DP(k+(k+1)/2-1,2);
        int d = DP(k+(k+1)/2,2);
        int e = DP(k+(k+1)/2 - 2, 0);
        c = max(c,d);
        c = max(c,e);
        dp[k][i] = c+cnt[k];
    }

    // printf("%d\n",dp[k][i]);
    return dp[k][i];
}
int main()
{
    int d;
    scanf("%d %d", &n, &d);
    int arr[n];
    memset(cnt,0,sizeof(cnt));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        s.insert(arr[i]);
        cnt[arr[i]]++;
    }
    printf("%d\n",cnt[27]);
    memset(dp,0,sizeof(dp));
    int ans = DP(d,0);
    printf("%d\n",ans);
}