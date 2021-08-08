#include <bits/stdc++.h>
using namespace std;
int dp[10000];
long long int f(int n)
{
    if(n==1)return 1;
    if(n==2)return 2;
    if(dp[n] != -1)return dp[n];
    else{
        dp[n] = f(n-1)+f(n-2);
    }
    return dp[n];
}
int main()
{
    int n;
    scanf("%d", &n);
    memset(dp,-1,sizeof(dp));
    long long int ans = f(n);
}