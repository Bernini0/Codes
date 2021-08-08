#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int height[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &height[i]);
        }
        vector<pair<int, int>> v(n);
        v[0].first = height[0];
        v[0].second = height[0];
        bool no = true;
        for (int i = 1; i < n; i++)
        {
            v[i].first = max(height[i], v[i - 1].first - k + 1);
            v[i].second = min(v[i - 1].second + k - 1, height[i] + k - 1);
            if (v[i].first > v[i].second)
            {
                no = false;
                break;
            }
        }
        if (!no)
        {
            printf("NO\n");
            continue;
        }
        else
        {
            if (v[n - 1].first <= height[n - 1])
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
}