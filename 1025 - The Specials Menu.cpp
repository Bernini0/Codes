#include <bits/stdc++.h>
using namespace std;
long long int dp[61];
string a;
long long int DP(int i, string s)
{
    if (i == a.size())
    {
        if (s.empty())
            return 0;
        bool no = false;
        for (int j = 0; j < s.size() / 2; j++)
        {
            if (s[j] != s[s.size() - 1 - j])
            {
                no = true;
                break;
            }
        }
        if (no)
            return 0;
        else
            return 1;
    }
    if(dp[i]!=-1)return dp[i];
    else
    {
        long long int ans1 = DP(i + 1, s);
        s.push_back(a[i]);
        long long int ans2 = DP(i + 1, s);
        dp[i] = ans1 + ans2;
        cout << s <<endl;
    }
    return dp[i];
}
int main()
{
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        // string a;
        memset(dp,-1,sizeof(dp));
        cin >> a;
        string s;
        long long int ans = DP(0,s);
        cout << ans <<endl;
    }
}