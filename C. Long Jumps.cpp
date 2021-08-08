#include <bits/stdc++.h>
using namespace std;
int n;
#define ll long long int
ll maxi = -1;
ll arr[200000 + 1];
ll dp[200000 + 1];
// bool vis[200000 + 1];
ll DP(ll a)
{
    if (a >= n)
        return 0;
    else if (dp[a] != -1)
        return dp[a];
    dp[a] = DP(a + arr[a]) + arr[a];
    // vis[a] = true;
    // printf("%lld\n",dp[a]);
    if(maxi < dp[a]){
        maxi = dp[a];
    }
    return dp[a];
    
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        // memset(vis, false, sizeof(vis));
        memset(dp, -1, sizeof(dp));
        maxi = -1;
        for (int i = 0; i < n; i++)
        {
            DP(i);
        }
        printf("%lld\n",maxi);
    }
}