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
        int arr[n];
        int arr2[500];
        bool vis[500];
        memset(vis, false, sizeof(vis));
        bool no = false;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            arr2[i] = arr[i];
            vis[arr[i] + 200] = true;
            if (arr[i] < 0)
                no = true;
        }
        if (!no)
        {
            printf("YES\n");
            printf("300\n");
            for (int i = 0; i < 300; i++)
            {
                printf("%d ", i);
            }
            printf("\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
