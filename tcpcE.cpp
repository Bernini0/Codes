#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int p, n;
        scanf("%d %d", &p, &n);
        int u, v;
        bool vis[21][21];
        int dp[21];
        memset(dp, 0, sizeof(dp));
        memset(vis, false, sizeof(vis));
        while (n--)
        {
            scanf("%d %d", &u, &v);
            vis[u][v] = true;
        }

        for (int i = 1; i <= p; i++)
        {
            int cnt = 0;
            vector<int> a;
            for (int j = 1; j <= p; j++)
            {
                if (vis[i][j])
                {
                    a.push_back(j);
                    cnt++;
                }
            }
            cnt++;
            for (int k = 1; k <= p; k++)
            {
                bool no = true;
                for (int l = 0; l < a.size(); l++)
                {
                    if(k == i || !vis[k][a[l]]){
                        no = false;
                        break;
                    }
                }
                if(no){
                    cnt++;
                }
            }
            dp[i] = cnt;
        }
        sort(dp, dp + 21);
        if (dp[20] < p)
        {
            dp[20] = p;
        }
        printf("%d\n", dp[20]);
    }
}