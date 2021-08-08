#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t;tc++)
    {
        int m,n, c;
        scanf("%d %d %d", &m, &n, &c);
        vector<pair<int,int>>cnt(n+1);
        for (int i = 0; i <=n; i++)
        {
            cnt[i].first = 0;
            cnt[i].second = 0;
        }
        
        int arr[m];
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &arr[i]);
            cnt[arr[i]].first++;
        }
        
        for (int i = 0; i <= n; i++)
        {
            int j = i%c;
            cnt[i].second = (j*j)%c;
        }
        sort(cnt.begin(),cnt.end());
        int cumu[n+1];
        cumu[n] = cnt[n].second;
        for (int i = n-1; i >= 0; i--)
        {
            cumu[i] = cumu[i+1]+cnt[i].second;
        }
        long long int ans = 0;
        for (int i = n; i >= 0; i--)
        {
            int a = cumu[i]*cnt[i].first;
            if(ans < a){
                ans = a;
            }
        }
        printf("Case %d: %lld\n",tc,ans);
    }
    
}