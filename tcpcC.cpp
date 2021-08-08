#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        vector<pair<int,int>>v;
        int a, b, c;
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d %d", &a, &b, &c);
            v.push_back({a,i});
            v.push_back({b,i});
            v.push_back({c,i});
        }
        sort(v.begin(),v.end());
        int j = 0;
        int cnt[n];
        memset(cnt,0,sizeof(cnt));
        long long int sum = 0;
        for (int i = 0; j < k; i++)
        {
            if(cnt[v[i].second]!= 2){
                sum += v[i].first;
                cnt[v[i].second]++;
                j++;
            }
        }
        printf("%lld\n",sum);
    }
    
}