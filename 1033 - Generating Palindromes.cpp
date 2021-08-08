#include <bits/stdc++.h>
using namespace std;
string s;
int dp[200][200];
int DP(int beg,int end)
{
    if(beg==end)return 0;
    if(beg > end)return 0;
    if(dp[beg][end]!=-1)return dp[beg][end];
    else
    {
        if(s[beg]==s[end]){
            dp[beg][end] = DP(beg+1,end-1);
            
        }
        else
        {
            dp[beg][end] = min(DP(beg,end-1)+1,DP(beg+1,end)+1);
        }
    }
    return dp[beg][end];
}
int main()
{
    int t;
    cin >> t;
    for(int tc = 1; tc<= t; tc++)
    {
        memset(dp,-1,sizeof(dp));
        s.clear();
        cin >> s;
        int ans = DP(0,s.size()-1);
        printf("Case %d: %d\n",tc,ans);
    }
    
}