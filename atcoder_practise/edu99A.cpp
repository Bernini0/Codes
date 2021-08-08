#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    long long int dp[10000];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i < 10000; i++)
    {
        dp[i] = dp[i-1]+i;
    }
    
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);
        int idx = lower_bound(dp,dp+10000,n) - dp;
        // printf("%d\n",idx);
        int y = dp[idx] - n;
        if(y!= 1){
            printf("%d\n",idx);
        }
        else{
            printf("%d\n",idx+1);
        }
    }
    
}