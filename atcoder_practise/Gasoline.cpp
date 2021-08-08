#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);
        long long int arr[n];
        vector<pair<long long int,pair<long long int,long long int>>>v(n);
        for (int i = 0; i < n; i++)
        {
            // scanf("%lld", &arr[i]);
            v[i].second.second = i;
        }
        // printf("skajdf\n");
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
            v[i].second.first = arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
            v[i].first = arr[i];
        }
        sort(v.begin(),v.end());
        // printf("jasgfb\n");
        long long int ans = 0;
        int k = 0;
        while (n >0)
        {
            ans += min(n,v[k].second.first)*v[k].first;
            n -= min(n,v[k].second.first);
            k++;
        }
        printf("%lld\n",ans);
    }
    
}