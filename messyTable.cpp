#include <bits/stdc++.h>
using namespace std;
int n;
pair<int, int> arr[5005];
int dp[5005];

int fnc(int pos){
    if(dp[pos] != -1) return dp[pos];

    int ret = 1;

    for(int i = 0; i < n; i++){
        if((arr[i].first > arr[pos].first && arr[i].second > arr[pos].second) || (arr[i].second > arr[pos].first && arr[i].first > arr[pos].second)){
            ret = max(ret, 1 + fnc(i));
        }
    }

    return dp[pos] = ret;
}

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i].first >> arr[i].second;
    }

    memset(dp, -1, sizeof(dp));

    int ans = 0;

    for(int i = 0; i < n; i++){
        ans = max(ans, fnc(i));
    }
    cout << ans << endl;
}