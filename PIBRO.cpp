#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    int arr[100005];
    char ch;
    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        cin >> ch;

        arr[i] = ch - '0';
    }
    int lft[100005];
    int rht[100005];
    lft[0] = lft[n+1] = rht[0] = rht[n+1] = 0;
    
    for(int i = 1; i <= n; i++){
        if(arr[i]) lft[i] = lft[i-1] + 1;
        else lft[i] = 0;
    }

    for(int i = n; i > 0; i--){
        if(arr[i]) rht[i] = rht[i+1] + 1;
        else rht[i] = 0;
    }
    int x; 
    while(cin >> x){
        cout << lft[x] << endl;
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}