#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        vector<vector<int>> v(n);
        v.clear();
        bool ha = true;
        int a;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &a);
                v[i].push_back(a);
                if (v[i][j] > 4)
                {
                    ha = false;
                }
                if ((j == 0 || j == m - 1) && (i==0 || i == n-1))
                {
                    if (v[i][j] > 2)
                    {
                        ha = false;
                    }
                }
                if (i == 0 || i == n - 1 || j == 0 || j == m-1)
                {
                    if (v[i][j] > 3)
                    {
                        ha = false;
                    }
                }
            }
        }
        if (!ha)
        {
            printf("NO\n");
            continue;
        }
        else
        {
            printf("YES\n");

            for (int i = 0; i < n; i++)
            {
                if (i == 0 || i == n - 1)
                {
                    printf("2 ");
                }
                else
                {
                    printf("3 ");
                }
                for (int j = 1; j < m - 1; j++)
                {
                    if (i == 0 || i == n - 1)
                    {
                        printf("3 ");
                    }
                    else
                    {
                        printf("4 ");
                    }
                }
                if (i == 0 || i == n - 1)
                {
                    printf("2\n");
                }
                else
                {
                    printf("3\n");
                }
            }
        }
    }
}