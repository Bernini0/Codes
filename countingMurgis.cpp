#include <bits/stdc++.h>
using namespace std;

int n, r;
int dp[21][21];

int ncr(int n, int r){
    if(n < r) return 0;
    if(n == r) return 1;
    if(r == 1) return n;

    if(dp[n][r] != -1) return dp[n][r];

    dp[n][r] = ncr(n-1, r) + ncr(n-1, r-1);

    return dp[n][r];
}

int main(){
    int t;
    scanf("%d", &t);
    memset(dp, -1, sizeof(dp));

    while (t--)
    {  
        scanf("%d %d", &n, &r); 

        int ans = ncr(n-1, r);

        printf("%d\n", ans);
    }
    return 0;
}