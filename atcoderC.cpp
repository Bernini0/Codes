#include <bits/stdc++.h>
using namespace std;

#define ll long long

int coins[] = {100, 101, 102, 103, 104, 105};
int cnt[] = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000};

int dp[6][100000];
int n;

int recur(int pos, int sum){
    if(sum == n) return 1;
    if(pos >= 6) return 0;

    if(dp[pos][sum] != -1) return dp[pos][sum];

    int ret1, ret2;
    ret1 = ret2 = 0;

    if(sum + coins[pos] <= n) ret1 = recur(pos, sum + coins[pos]);
    ret2 = recur(pos+1, sum);

    dp[pos][sum] = ret1 | ret2;
}

int main(){
    memset(dp, -1, sizeof(dp));

    n; cin >> n;

    if(n < 100){
        cout << 0 << endl;
        return 0;
    }

    if(recur(0, 0)) cout << 1 << endl;
    else cout << 0 << endl;
}