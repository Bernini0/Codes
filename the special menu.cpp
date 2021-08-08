#include <bits/stdc++.h>
using namespace std;
string s;
#define ll long long int
ll dp[61][61];
ll DP(int i, int j){
    if(j < i)return 0;
    if(i==j)return 1ll;
    if(dp[i][j]!=-1)return dp[i][j];
    if(s[i]==s[j]){
        dp[i][j] = 1;//palindrome is s[i]s[j];
        dp[i][j] += DP(i+1,j-1);//s[i] and s[j] niye tarpor majher position fill up kortasi
        dp[i][j] += DP(i+1,j)+DP(i,j-1);//s[i] bad diye ekbar ar s[j] bad diye ekbar fill up kortasi
        dp[i][j] -= DP(i+1,j-1);//DP(i+1,j) ar DP(i,j-1) e DP(i+1,j-1) duibar call hoitase tai ekbar bad ditasi
    }
    else dp[i][j] = DP(i+1,j)+DP(i,j-1)-DP(i+1,j-1);
    return dp[i][j];
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        s.clear();
        cin >> s;
        memset(dp,-1,sizeof(dp));
        ll ans = DP(0,s.size()-1);
        printf("Case %d: %lld\n",tc,ans);
    }
}