#include <bits/stdc++.h>
using namespace std;
int dp[300][300];
int n;
vector<int>v[300];
int f(int x, int y)
{
    if(x==2*n-2 && y==0){
        dp[x][y] = v[x][y];
        return dp[x][y];
    }
    if(dp[x][y]!= -1)return dp[x][y];
    else if((2*n-2)-x==y){
        dp[x][y] = f(x+1,y-1)+v[x][y];
        // printf("%d\n",dp[x][y]);
    }
    else if(x>=n-1 && y == 0){
        dp[x][y] = f(x+1,y)+v[x][y];
        // printf("%d\n",dp[x][y]);
    }
    else if(x< n-1)
    {
        dp[x][y] = max(f(x+1,y),f(x+1,y+1))+v[x][y];
        // printf("%d\n",dp[x][y]);
    }
    else {
        dp[x][y] = max(f(x+1, y),f(x+1,y-1))+v[x][y];
    }
    return dp[x][y];
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        // int n;
        scanf("%d", &n);
        memset(dp,-1,sizeof(dp));
        for (int i = 0; i < 300; i++)
        {
            v[i].clear();
        }
        
        int c;
        for (int i = 0; i < 2*n-1; i++)
        {
            if(i < n){
            for (int j = 0; j <= i; j++)
            {
                scanf("%d", &c);
                v[i].push_back(c);
            }
            }
            else{
                for (int j = 0; j < n-(i-n+1); j++)
                {
                    scanf("%d", &c);
                    v[i].push_back(c);
                }
                
            }

        }
        int  ans = f(0,0);
        printf("Case %d: %d\n",tc,ans);
    }
    
}