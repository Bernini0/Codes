#include <bits/stdc++.h>
using namespace std;
int arr[21][3];
int dp[21][21];
int f(int i, int j,int& n)
{
    if(i==n)return 0;
    if(dp[i][j]!= -1)return dp[i][j];
    else
    {
        if(j==0){
            dp[i][j] = min(f(i+1,1,n),f(i+1,2,n))+arr[i][j];
        }
        else if(j==1){
            dp[i][j] = min(f(i+1,0,n),f(i+1,2,n))+arr[i][j];
        }
        else if(j==2){
            dp[i][j] = min(f(i+1,0,n),f(i+1,1,n))+arr[i][j];
        }
    }
    return dp[i][j];
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc =1; tc <= t; tc++)
    {
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            for(int j = 0; j< 3; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }
        memset(dp,-1,sizeof(dp));
        int a = f(0,0,n);
        memset(dp,-1,sizeof(dp));
        int b = f(0,1,n);
        memset(dp,-1,sizeof(dp));
        int c = f(0,2,n);
        int d = min(a,b);
        d = min(d,c);
        printf("Case %d: %d\n",tc,d);
    }
}