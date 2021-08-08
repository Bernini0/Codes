#include <bits/stdc++.h>
using namespace std;

int a, b, k;
int dp[12][100][100][2];

vector<int> val;

void length(int n){
    val.clear();

    while (n != 0)
    {
        val.push_back(n % 10);
        n /= 10;
    }
}

int POW(int n){
    int a = 1;

    for(int i = 1; i <= n; i++){
        a *= 10;
    }
    return a;
}

int dfs(int pos, int plusMod, int mulMod, bool flag){
    if(pos < 0) return plusMod == 0 && mulMod == 0;
    if(dp[pos][plusMod][mulMod][flag] != -1) return dp[pos][plusMod][mulMod][flag];

    int mx = flag? 9 : val[pos];
    int ret = 0;

    for(int i = 0; i <= mx; i++){
        ret += dfs(pos-1, (plusMod + i) % k, (mulMod*10 + i) % k, flag | i < mx);
    }
    return dp[pos][plusMod][mulMod][flag] = ret;
}

int solve(int x){
    memset(dp, -1, sizeof(dp));
    length(x);
    return dfs(val.size()-1, 0, 0, 0);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int t;
    cin >> t;

    for(int tc = 1; tc <= t; tc++){
        cin >> a >> b >> k;

        cout << "Case " << tc << ": ";
        if(k > 95){
            cout << 0 << endl;
            continue;
        }
        int ans = solve(b) - solve(a-1);
        cout << ans << endl;
    }
}