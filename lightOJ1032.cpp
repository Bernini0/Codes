#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n;
ll dp[35][2][35][2];

int length(int n){
    int i = 0;

    while(n != 0){
        n /= 2;
        i++;
    }
    return i;
}

ll dfs(int pos, int prev, int cnt, bool flag){
    if(pos < 0) return cnt;
    if(dp[pos][prev][cnt][flag] != -1) return dp[pos][prev][cnt][flag];

    int mx = 1;
    ll ret = 0;

    if(!flag) mx = (n&(1 << pos))? 1: 0;

    for(int i = 0; i <= mx; i++){
        ret += dfs(pos-1, i, cnt + (i == 1 && prev == 1), flag | (i < mx));
    }

    return dp[pos][prev][cnt][flag] = ret;
}

int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int t; cin >> t;

    for(int tc = 1; tc <= t; tc++){
        cin >> n;

        memset(dp, -1, sizeof(dp));

        cout << "Case " << tc << ": " << dfs(length(n)-1, 0, 0, 0) << endl;
    }
    return 0;
}