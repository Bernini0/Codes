#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        string a,b;
        cin >> a >> b;
        int maxcnt = 0;
        int dp[a.size()+1][b.size()+1];
        memset(dp,0,sizeof(dp));
        for (int i = 1; i <= a.size(); i++)
        {
            for(int j = 1; j <= b.size(); j++)
            {
                if(a[i-1]==b[j-1]){
                    dp[i][j] = dp[i-1][j-1]+1;
                    if(dp[i][j] > maxcnt){
                        maxcnt = dp[i][j];
                    }
                }
            }
        }
        // printf("%d\n",maxcnt);
        int ans = a.size()+b.size()-(2*maxcnt);
        printf("%d\n",ans);
    }
    
}