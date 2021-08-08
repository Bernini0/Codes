#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>arr1(101);
vector<int>arr;
int dp[101][101];
int n, w;
int DP(int i,int k)
{
    if(k==0)return 0;
    if(i==n)return 0;
    if(dp[i][k]!=-1)return dp[i][k];
    else
    {
        int l = 0,j;
        for (j = i; j < n; j++)
        {
            if(abs(arr[i]-arr[j]) <= w){
                l++;
            }
            else{
                break;
            }
        }
        dp[i][k] = max(DP(j,k-1)+l,DP(i+1,k));
        // printf("%d\n",dp[i][k]);
    }
    return dp[i][k];
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc =1 ;tc <= t; tc++)
    {
        int k;
        scanf("%d %d %d", &n, &w, &k);
        arr.clear();
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &arr1[i].first, &arr1[i].second);
            arr.push_back(arr1[i].second);
        }
        sort(arr.begin(),arr.end());
        memset(dp,-1,sizeof(dp));
        int ans = DP(0,k);
        printf("Case %d: %d\n",tc,ans);
    }
}