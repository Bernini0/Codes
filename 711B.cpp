#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, w;
        scanf("%d %d", &n, &w);
        vector<int> arr(n);
        int vis[20];
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            int a = (log10(arr[i]) / log10(2));
            vis[a]++;
        }
        sort(arr.begin(), arr.end());
        int ans = 0;
        // int k = w;
        // printf("sadfhsa\n");
        while (arr.size() > 0)
        {
            int k = w;
            ans++;
            k -= arr[arr.size() - 1];
            // printf("outside K --- >%d %d\n", k, arr[arr.size() - 1]);
            arr.erase(arr.begin() + arr.size() - 1);
            // for (int i = 0; i < arr.size(); i++)
            // {
            //     printf("%d ", arr[i]);
            // }
            // printf("\n");
            while (k >= 0 && arr.size() > 0)
            {
                int idx = lower_bound(arr.begin(), arr.end(), k) - arr.begin();
                // printf("IDX---> %d\n",idx);
                if (arr[idx] > k)
                {
                    idx--;
                    if (idx < 0)
                    {
                        break;
                    }
                }
                if(idx==arr.size()){
                    idx--;
                }
                k -= arr[idx];
                
                arr.erase(arr.begin() + idx);
                // printf("inside K --- >%d %d\n", k, arr[idx]);
                // for (int i = 0; i < arr.size(); i++)
                // {
                //     printf("%d ", arr[i]);
                // }
                // printf("\n");
            }
        }
        printf("%d\n", ans);
    }
}