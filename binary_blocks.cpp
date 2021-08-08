#include <bits/stdc++.h>
using namespace std;
int cnt[2500][2500];
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a = max(n, m);
    int b = 2;
    char arr[n][m];
    memset(cnt, 0, sizeof(cnt));
    getchar();
    int inone = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%c", &arr[i][j]);
            if (j == 0)
            {
                cnt[i][j] = 0;
            }
            else
                cnt[i][j] = cnt[i][j - 1];
            if (arr[i][j] == '1')
            {
                cnt[i][j]++;
                inone++;
            }
        }
        getchar();
    }
    int ans = 1000000000;
    int p;
    while (b <= a)
    {
        int ans1 = 0;
        for (int i = 0; i < n; i += b)
        {
            for (int j = 0; j < m; j += b)
            {
                int one = 0;
                for (int k = 0; k < b; k++)
                {
                    int d, e, c;
                    if (i + k >= n)
                        continue;

                    c = min(j + b - 1, m-1);
                    d = cnt[i + k][c];
                    if (j == 0)
                    {
                        e = 0;
                    }
                    else
                        e = cnt[i + k][j - 1];
                    one += d - e;
                }
                if (one > 0)
                {
                    int zero = b * b - one;
                    ans1 += min(zero, one);
                    // if (b == 2)
                    // {
                    //     printf("%d %d %d %d\n", i, j, one, zero);
                    // }
                }
            }
        }
        if (ans > ans1)
        {
            ans = ans1;
            p = b;
        }
        b++;
    }
    printf("%d\n", ans);
}