#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m, x;
        scanf("%d %d %d", &n, &m, &x);
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        sort(arr, arr + n);
        reverse(arr, arr + n);
        sum /= m;
        bool vis[n];
        memset(vis, false, sizeof(vis));
        // vector<int> ans[m];
        int ans[n];
        bool no = false;
        priority_queue<pair<int, int>> ans2;
        for (int i = 0; i < m; i++)
        {
            int p = 0;
            int j = 0;
            while (p < sum)
            {
                if (j > n)
                {
                    // no = true;
                    break;
                }
                if (vis[j])
                    j++;
                if (p + arr[j] > sum)
                    j++;
                else
                {

                    p += arr[j];
                    // ans[i].push_back(j);
                    ans[j] = i;
                    vis[j] = true;
                    j++;
                }
            }
            ans2.push({p * (-1), i});
        }
        if (no)
        {
            printf("NO\n");
            continue;
        }
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                int a = ans2.top().first * (-1);
                int b = ans2.top().second;
                ans2.pop();
                if (a + arr[i] > sum + (x / 2))
                {
                    printf("%d %d %d\n", i, a, arr[i]);
                    no = true;
                    break;
                }
                else
                {
                    ans2.push({(a + arr[j]) * (-1), b});
                    vis[i] = true;
                    ans[i] = b;
                    // ans[b].push_back(i);
                }
            }
        }
        if (no)
        {
            printf("1NO\n");
        }
        else
        {
            printf("YES\n");
            for (int i = 0; i < n; i++)
            {
                printf("%d ", ans[i] + 1);
            }
            printf("\n");
        }
    }
}