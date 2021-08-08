#include <bits/stdc++.h>
using namespace std;
char arr[501][501];
bool vis[501][501];
int f(int r, int pos1, int k, int l)
{
    int ans = 0;
    for (int i = pos1 + 1; i <= pos1 + k; i++)
    {
        if (arr[r][i] == '*')
        {
            vis[r][i] = true;
            ans += l;
        }
    }
    return ans;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        // printf("skhfksfn");
        getchar();
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%c", &arr[i][j]);
                if (arr[i][j] == '*')
                {
                    cnt++;
                }
            }
            getchar();
        }
        // printf("sdhfksdf");
        memset(vis, false, sizeof(vis));
        long long int ans = cnt;
        for (int i = n - 1; i >= 0; i--)
        {
            int k = 0;
            int r;
            // printf("skdhfsf\n");
            for (int j = 0; j < m; j++)
            {
                // printf("%d\n",j);
                if (arr[i][j] == '*' && !vis[i][j])
                {
                    vis[i][j] = true;
                    k = 1;
                    r = j;
                    // printf("k ______ %d\n",k);
                }
                while (arr[i][j] == '*' && j + 1 < m && arr[i][j] == arr[i][j + 1] && !vis[i][j + 1])
                {
                    vis[i][j+1] = true;
                    j++;
                    k++;
                    // printf("k --- %d\n",k);
                }
                if (k > 1)
                {
                    
                    int l = 1;
                    while (k > 0)
                    {
                        if (i > 0)
                        {
                            ans += f(i - 1, r, k - 2, l);
                            // printf("%lld\n",ans);
                            r++;
                        }
                        else{
                            ans += k;
                        }
                        k -= 2;
                        l++;
                    }
                }
            }
        }
        printf("%d\n", ans);
    }
}