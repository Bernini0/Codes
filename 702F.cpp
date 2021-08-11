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
        vector<int>arr(n);
        map<int,int>mp;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if(mp.find(arr[i])==mp.end()){
                mp[arr[i]] = 1;
            }
            else mp[arr[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto i = mp.begin(); i != mp.end(); i++){
            v.push_back({i->second,i->first});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int cnt[v[0].first+1];
        memset(cnt,0,sizeof(cnt));
        int sum = 0;
        int ans = 1000000000;
        for (int i = 0; i < v.size(); i++)
        {
            cnt[v[i].first]++;
        }
        for (int i = v[0].first; i >= 0; i--)
        {
            ans = min(ans,n-(i*(cnt[i]+sum)));
            sum += cnt[i];
        }
        printf("%d\n",ans);
    }
    
}