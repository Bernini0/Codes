#include<bits/stdc++.h>
using namespace std;
int ara[200005];
int dp[2025][2025];
int fnc(int n, int r)
{
    if(n == r || r == 0) return 1;
    if(dp[n][r] != -1) return dp[n][r];
    int val1 = fnc(n-1, r);
    int val2 = fnc(n-1, r-1);
    return dp[n][r] = (val1+val2)%2;

}
int main()
{
    memset(dp, -1, sizeof(dp));
    int T, k, n;
    cin >> T;
    while(T--){
        scanf("%d %d", &k, &n);
        for(int i = 0; i < n; i++){
            scanf("%d", &ara[i]);
        }
        if(k > n){
            if(n != 1) printf("0\n");
            else{
                printf("%d\n", ara[0]);
            }
            continue;
        }
        int ans = 0;
        for(int i = 0; i <= k-2; i++){
            ans += fnc(n-1, i);
        }
        if(ans % 2 == 0){
            printf("0\n");
        }
        else{
            int cnt = 0;
            for(int i = 0; i < n; i++){
                cnt ^= ara[i];
            }
            printf("%d\n", cnt);
        }
    }
    return 0;
}