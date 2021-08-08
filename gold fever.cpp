#include <bits/stdc++.h>
using namespace std;
int n;
long long int arr[100000][3];
long long int dp[100000];
bool vis[200000];
long long int maxi = -1;
long long int f(long long int a)
{
    long long int x = arr[a][0];
    if (a >= n)
        return 0;
    if (dp[a] != -1)
        return dp[a];
    else
    {
        vis[a] = true;
        for (int i = a+arr[a][1]; i <= a+arr[a][2]; i++)
        {
            
            vis[i] = true;
            x = max(x, f(i) + arr[a][0]);
            if(i >=n){
                break;
            }
            // printf("%d\n",x);
        }
    }
    dp[a] = x;
    if(maxi<dp[a]){
        maxi = dp[a];
    }
    return dp[a];
}
int main()
{

    scanf("%d", &n);
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; i++)
    {
        scanf("%lld %lld %lld", &arr[i][0], &arr[i][1], &arr[i][2]);
    }
    // printf("sadfhksadf\n");
    memset(vis,false,sizeof(vis));
    for (int i = n-1; i >= 0; i--)
    {
        if(!vis[i]){
            f(i);
        }
    }
    printf("%lld\n",maxi);
}