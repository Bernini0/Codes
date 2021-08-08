#include <bits/stdc++.h>
using namespace std;
int a[2*100000];
int b[2*100000];
int n;
int dp[2*100000];

// m = a and pos = i hole ami minimum koto pai
int kp(int m, int pos, int w) {
    if(m == 0) {
        return w;
    }
    if (pos >= n){
        if(m == 0) {
            return w;
        } else {
            return INFINITY;
        }
    }

    if (dp[pos] != -1) return dp[pos];

    return dp[pos] = min(kp(m-a[pos],w+b[pos],pos+1),kp(m,w,pos+1));
}

int knapsack(int w, int pos) {
    if(w == 0) {}
}

int DP(int m,int w, int pos)
{
    
    if(m <= 0){
        return w;
    }
    if(pos >= n)return 2000000000;
    if(dp[pos]!= -1)return dp[pos];
    else
    {
        dp[pos] = min(DP(m-a[pos],w+b[pos],pos+1),DP(m,w,pos+1));
        printf("%d --- > %d\n",pos,dp[pos]);
        return dp[pos];
    }
    
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int m;
        scanf("%d %d", &n, &m);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }
        memset(dp,-1,sizeof(dp));
        int ans = kp(m,0,0);
        if(ans==2000000000){
            printf("-1\n");
        }
        else
        {
            printf("%d\n",ans);
        }
        
        
    }
    
}