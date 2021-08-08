#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v(1000);
int n, l;
int dp[1000][1000];
int DP(int pos, int time){
    if(pos >= n || time > l)return 0;
    if(dp[pos][time]!= -1)return dp[pos][time];
    else
    {
        int a = DP(pos+1,time);
        int b = 0;
        if(max(time,v[pos].first)+v[pos].second-1 < l){
            b = DP(pos+1,max(time,v[pos].first)+v[pos].second-1)+1;
        }
        dp[pos][time] = max(a,b);
    }
    // printf("%d %d\n",dp[pos][time],time);
    return dp[pos][time];
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        v.clear();
        // int l;
        scanf("%d %d", &n, &l);
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &v[i].first, &v[i].second);
        }
        // sort(v.begin(),v.end());
        memset(dp,-1,sizeof(dp));
        int ans = DP(0,0);
        printf("%d\n",ans);
    }
    

}