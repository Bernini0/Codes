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
        int arr[n + 1];
        int arr2[n];
        int c = -1, d = -1;
        bool vis[n+1];
        memset(vis,false,sizeof(vis));
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &c);
            arr2[i] = c;
            vis[c] = true;
            if (c != d)
            {
                d = c;
                arr[c]++;
            }
        }
        // printf("jsdgbf\n");
        // printf("%d\n",arr[1]);
        
            arr[arr2[0]]--;
            arr[arr2[n - 1]]--;
            if(arr[arr2[0]]==0 || arr[arr2[n-1]]==0){
                printf("1\n");
                continue;
            }
        // if(arr[arr2[0]]==1 || arr[arr2[n-1]]==1){
        //     printf("1\n");
        //     continue;
        // }
       
        sort(arr2, arr2 + n);
        if (arr2[0] == arr2[n - 1])
        {
            printf("0\n");
            continue;
        }

        sort(arr, arr + n + 1);
        for (int i = 0; i <= n; i++)
        {
            if (arr[i] != 0)
            {
                printf("%d\n", arr[i]+1);
                break;
            }
        }
    }
}