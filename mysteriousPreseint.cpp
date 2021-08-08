#include <bits/stdc++.h>
using namespace std;
int n, w, h;
pair<int, int> arr[5001];

int dp[5001];
int nxt[5001];

int fnc(int idx){
    if(idx >= n) return 0;
    if(dp[idx] != -1) return dp[idx];

    int ret = 1;

    for(int i = 0; i < n; i++){
        if(arr[i].first > arr[idx].first && arr[i].second > arr[idx].second){
            int lret = 1 + fnc(i);

            if(lret > ret){
                ret = lret;
                nxt[idx] = i;
            }
        }
    }
    return dp[idx] = ret;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);

    cin >> n >> w >> h;

    for(int i = 0; i < n; i++){
        cin >> arr[i].first >> arr[i].second;
    }

    memset(dp, -1, sizeof(dp));

    int res = 0;
    int idx = 0;

    for(int i = 0; i < n; i++){
        if(arr[i].first > w && arr[i].second > h){
            int localres = fnc(i);

            if(localres > res){
                res = localres;
                idx = i;
            }
        }
    }

    if(res){
        cout << res << endl;

        while(res--) cout << idx+1 << " ", idx = nxt[idx]; cout << endl;
    }
    else cout << 0 << endl;

    return 0;
}