#include <bits/stdc++.h>
using namespace std;
int n;
vector<pair<pair<int,int>,int>>arr;
vector<int>arr2;
int dp[1000];
// int minimum = INT_MAX;
// int maximum = INT_MIN;
int DP(int i)
{
    if(i==n)return 0;
    if(dp[i]!=-1)return dp[i];
    else
    {
        int k = upper_bound(arr2.begin(),arr2.end(),arr[i].first.second)-arr2.begin();
        
        dp[i] = max(DP(i+1), DP(k)+arr[i].second);
        // printf("%d\n",dp[i]);
    }
    return dp[i];
}
int main()
{
    scanf("%d", &n);
    int u,v, p;
    memset(dp,-1,sizeof(dp));
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &u, &v, &p);
        arr.push_back({{u,v},p});
      
    }
    
    sort(arr.begin(),arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        arr2.push_back(arr[i].first.first);
    }
    arr2.push_back(100000000);
    int ans = DP(0);
    printf("%d\n",ans);
}