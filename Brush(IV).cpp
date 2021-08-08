#include <bits/stdc++.h>
using namespace std;
vector<pair<pair<int, int>, int>> slopes[16];
bool vis[16];
vector<pair<pair<int, int>, pair<int, int>>> arr(16);
vector<pair<int, int>> points(16);
void clr()
{
    for (int i = 0; i < 16; i++)
    {
        slopes[i].clear();
    }
    arr.clear();
    // memset(m,0,sizeof(m));
}
int m = 0, p = 0, q;
void f1(int i, int n)
{
    if (vis[i])
        return;

    for (int j = 0; j < n; j++)
    {
        if (i == j)
            continue;
        if (vis[j])
            continue;
        int c = points[i].second - points[j].second;
        int d = points[i].first - points[j].first;
        int e = __gcd(c, d);
        c /= e;
        d /= e;
        // if (i == 13)
        // {
        //     printf("%d ----> %d %d\n", j, c, d);
        // }
        slopes[i].push_back({{c, d}, j});
    }
    // if(i==13){
    //     for (int j = 0; j < slopes[13].size(); j++)
    //     {
    //         printf("%d %d\n",slopes[13][j].first.first,slopes[13][j].first.second);
    //     }
    // }

    if (slopes[i].size() > 0)
    {
        sort(slopes[i].begin(), slopes[i].end());
        int maximum = 1;
        int k1 = slopes[i][0].first.first, k2 = slopes[i][0].first.second;
        for (int j = 1; j < slopes[i].size(); j++)
        {
            int maxi = 1;
            while (slopes[i][j - 1].first.first * slopes[i][j].first.second == slopes[i][j - 1].first.second * slopes[i][j].first.first && j < slopes[i].size())
            {
                maxi++;
                j++;
            }
            if (maxi > maximum)
            {
                k1 = slopes[i][j - 1].first.first;
                k2 = slopes[i][j - 1].first.second;
                maximum = maxi;
            }
            j++;
        }
        // if (i == 13)
        // {
        //     printf("%d\n", maximum);
        // }
        arr[i].first.first = maximum;
        arr[i].first.second = i;
        arr[i].second.first = k1;
        arr[i].second.second = k2;
        if (m < maximum)
        {
            m = maximum;
            p = i;
        }
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        int n;
        m = 0;
        q = 0;
        scanf("%d", &n);
        clr();
        // printf("%d\n", arr[1]);
        points.clear();
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &points[i].first, &points[i].second);
        }
        memset(vis, false, sizeof(vis));
        int cnt = 0;
        while (q < n)
        {
            clr();
            for (int i = 0; i < n; i++)
            {
                f1(i, n);
            }
            vis[p] = true;
            q++;
            cnt++;
            // if(m==17)break;
            if(q==n)break;
            for (int i = 0; i < slopes[p].size(); i++)
            {
                if(slopes[p][i].first.first*arr[p].second.second==slopes[p][i].first.second*arr[p].second.first){
                    vis[slopes[p][i].second] = true;
                    q++;
                }
            }
            m = 0;
        }
        // sort(arr.begin(),arr.end());
        printf("Case %d: %d\n",tc, cnt);
    }
}