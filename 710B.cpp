#include <bits/stdc++.h>
using namespace std;
int n, k;
int dp[50][50];
int p, q;
string s;
int DP(int pos, int prev)
{
    if (pos > q)
        return 0;
    if (pos - prev > k)
        return 100000;
    if (dp[pos][prev] != -1)
        return dp[pos][prev];
    if (s[pos] == '*')
    {
        dp[pos][prev] = min(DP(pos + 1, prev), DP(pos + 1, pos)+1);
    }
    else
    {
        dp[pos][prev] = DP(pos + 1, prev);
    }
    return dp[pos][prev];
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {

        scanf("%d %d", &n, &k);
        s.clear();
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '*')
            {
                cnt++;
                if (cnt == 1)
                {
                    p = i;
                    q = i;
                }
                else
                {
                    q = i;
                }
            }
        }
        if(p==q){
            printf("1\n");
            continue;
        }
        else
        {
            memset(dp,-1,sizeof(dp));
            int ans = DP(p+1,p)+2;
            printf("%d\n",ans);
        }
        

    }
}