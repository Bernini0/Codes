#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    bool vis[2300];
    memset(vis, false, sizeof(vis));
    vis[111] = vis[222] = vis[333] = vis[444] = vis[555] = vis[666] = vis[777] = vis[888] = vis[999] = vis[1111] = vis[2222] = true;
    vis[11] = true;
    for (int i = 1; i <=2230; i++)
    {
        if (vis[i])
        {
            vis[i + 11] = true;
            for(int j = 2; i*j <= 2230; j++){
                vis[i*j] = true;
            }
        }

    }
    // for (int i = 0; i <= 1200; i++)
    // {
    //     if (vis[i])
    //     {
    //         printf("%d\n", i);
    //     }
    // }

    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (n > 1200 || vis[n])
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
}