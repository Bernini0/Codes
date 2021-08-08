#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int dp[2050][2050];
int nCr(int n, int r)
{
    if(n == r || r == 0) return 1;
    if(dp[n][r] != -1) return dp[n][r];
    int val1 = nCr(n-1, r);
    int val2 = nCr(n-1, r-1);
    return dp[n][r] = (val1+val2)%2;
}
int main()
{
    int t;
    scanf("%d", &t);
    memset(dp,-1,sizeof(dp));
    while (t--)
    {
        
        int k , n;
        scanf("%d %d", &k, &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        if(k > n){
            if(n > 1){
                printf("0\n");
            }
            else
            {
                printf("%d\n",arr[0]);
            }
            continue;
        }
        int ans = 0;
        for (int i = 0; i < k -1; i++)
        {
            ans += nCr(n-1,i);
        }
        if(ans%2==0){
            printf("0\n");
        }
        else
        {
            ans = 0;
            for (int i = 0; i < n; i++)
            {
                ans ^= arr[i];
            }
            printf("%d\n",ans);
        }
        
    }
    
}