#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    unsigned long long int dp[31][31];
    long long int arr[31];
    memset(dp,0,sizeof(dp));
    for (int i = 0; i < 16; i++)
    {
        arr[i] = 1;
        for(int j = 1; j <= i; j++){
            arr[i] *= j;
        }
    }
    
    for (int i = 1; i < 31; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if(j==0){
                dp[i][j] = 1;
            }
            else if(j==1){
                dp[i][j] = i;
            }
            else{
                // long long int ans = 1ll;
                
                dp[i][j] = dp[i][j-1]*(i-j+1);
                dp[i][j] /= j;
                // dp[i][j] *= (i-j+1);
           }
        }
        
    }
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        long long int ans = dp[n][m];
        for (int i = n; i > n-m ; i--)
        {
            ans *= i;
        }
        printf("Case %d: %lld\n",tc,ans);
    }
}