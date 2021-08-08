#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        vector<int> adj[n + 1];
        int indegree[n + 1];
        memset(indegree, 0, sizeof(indegree));
        int v;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &v);
            adj[i + 1].push_back(v);
            indegree[v]++;
        }
        vector<int> no_one_wants_you;
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (indegree[i] > 0)
                cnt++;
            else
                no_one_wants_you.push_back(i);
        }
        printf("%d\n", cnt);
        bool vis[n + 1];
        memset(vis, false, sizeof(vis));
        int k = 0;
        int ans[n + 1];
        memset(ans, 0, sizeof(ans));
        for (int i = 0; i < no_one_wants_you.size(); i++)
        {
            int r = adj[no_one_wants_you[i]][0];
            if (!vis[r])
            {
                ans[no_one_wants_you[i]] = r;
                vis[r] = true;
            }
            else
            {

                ans[no_one_wants_you[i]] = no_one_wants_you[k];
                vis[no_one_wants_you[k]] = true;
                k++;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (indegree[i] == 0)
                continue;
            if (ans[i] == 0)
            {
                if (!vis[adj[i][0]])
                {
                    ans[i] = adj[i][0];
                    vis[adj[i][0]] = true;
                }
                else
                {

                    ans[i] = no_one_wants_you[k];
                    vis[no_one_wants_you[k]] = true;
                    k++;
                }
            }
        }
        for (int i = 1; i < n + 1; i++)
        {
            printf("%d ", ans[i]);
        }

        printf("\n");
    }
}