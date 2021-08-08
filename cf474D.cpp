#include <bits/stdc++.h>
using namespace std;

const int M = 100005;
const int md = 1000000007;

int k, a, b;
int dp[M];
int qsum[M];

int dfs(int i){
    if(i <= k) return dp[i];
    if(dp[i] != -1) return dp[i];

    dp[i] = (dfs(i-1) % md + dfs(i-k)%md) % md;
    return dp[i] % md;
}

int main(){
    int t;
    cin >> t;
    cin >> k;

    memset(dp, -1, sizeof(dp));
    memset(qsum, -1, sizeof(qsum));
    qsum[0] = 0;

    for(int i = 0; i < k; i++) dp[i] = 1;
    dp[k] = 2;

    int crnt = 0;

    while(t--){
        cin >> a >> b;

        if(b > crnt){
            for(int i = crnt + 1; i <= b; i++){
                qsum[i] = (qsum[i-1] % md + dfs(i) % md) % md;
            }
            crnt = b;
        }
        cout << ((qsum[b] % md - qsum[a-1] % md) % md + md) % md<< endl;
    }
    return 0;
}