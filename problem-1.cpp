#include <bits/stdc++.h>
using namespace std;
int arr[100];
int dp[100];
int n;
int f(int i)
{
    if(i >= n)return 0;
    if(dp[i]!=-1)return dp[i];
    else{
       dp[i] = max(f(i+1),f(i+2)+arr[i]);
    //    printf("%d\n",dp[i]);
    }
    return dp[i];
}
int main()
{
    // int n;
    scanf("%d", &n);
    memset(dp,-1,sizeof(dp));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ans = f(0);
    printf("%d\n",ans);
}