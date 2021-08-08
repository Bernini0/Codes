#include <bits/stdc++.h>
using namespace std;
int n;
int arr[100000+1];
int dp[100001][2];
int DP(int pos,int sign)
{
    if(pos==n)return 0;
    if(dp[pos][sign%2]!= -1)return dp[pos][sign%2];
    else
    {
        if(sign%2==0)
        {
            dp[pos][sign%2] = max(DP(pos+1,sign),DP(pos+2,sign+1)+arr[pos]);
        }
        else
        {
            dp[pos][sign%2] = max(DP(pos+1,sign),DP(pos+2,sign+1)-arr[pos]);
        }
    }
    return dp[pos][sign%2];
}
int main()
{
    // int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}