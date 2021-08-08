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
        n *= 2;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr, arr + n);
        vector<pair<int, pair<int, int>>> sum;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                sum.push_back({arr[i] + arr[j], {i, j}});
            }
        }
        sum.push_back({100000000, {-1, -1}});
        sort(sum.begin(), sum.end());
        vector<int>sum1;
        vector<pair<int,int>>sum2;
        for (int i = 0; i < sum.size(); i++)
        {
            sum1.push_back(sum[i].first);
            // sum2.push_back({sum[i].second.first,sum[i].second.second});
        }
        bool vis[n];
        bool no = false;
        for (int i = sum.size() - 2; i >= 0; i--)
        {
            int l = sum[i].first;
            int k = i;
            bool no = false;
            vector<pair<int, int>> ans;
            int cnt = 1;
            memset(vis,false,sizeof(vis));
            ans.push_back({sum[i].second.first, sum[i].second.second});
            vis[arr[sum[i].second.first]] = true;
            vis[arr[sum[i].second.second]] = true;
            while (1)
            {
                int j = lower_bound(sum1.begin(), sum1.begin()+k+1, arr[sum[k].second.second]) - sum1.begin();
                if(vis[sum[j].second.first] || vis[sum[j].second.second]){
                    int p = sum1[j];
                    while (sum1[j] == p)
                    {
                        if(!vis[sum[j].second.first] && !vis[sum[j].second.second]){
                            break;
                        }
                        else
                        {
                            j++;
                        }
                        
                    }
                    if(vis[sum[j].second.first] || vis[sum[j].second.second])continue;
                }
                // printf("%d %d",sum1[j],sum[k].second.second);
                if (arr[sum[k].second.second] == sum[j].first)
                {
                    // printf("%d %d ",sum[j].second.first,sum[j].second.second);
                    cnt++;
                    vis[sum[j].second.first] = true;
                    vis[sum[j].second.second] = true;
                    ans.push_back({arr[sum[j].second.first], arr[sum[j].second.second]});
                    k = j;
                }
                else
                {
                    break;
                }
                if (cnt == n / 2)
                {
                    printf("YES\n");
                    printf("%d\n", l);
                    for (int i = 0; i < ans.size(); i++)
                    {
                        printf("%d %d\n", ans[i].first, ans[i].second);
                    }
                    no = true;
                    break;
                }
                printf("\n");
            }
            if (no)
            {
                break;
            }
        }
        if(!no){
            printf("NO\n");
        }
    }
}