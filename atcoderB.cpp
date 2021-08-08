#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    float x = n / 1.08;

    int p = floor(x);

    int ans  = -1;

    for(int i = p; ; i++){
        x = i * 1.08;
        //cout << i << " -> " << x << endl;
        int tmp = floor(x);

        if(tmp == n){
            ans = i; break;
        }
        if(tmp >= n+1) break;
    }
    
    if(ans != -1) cout << ans << endl;
    else cout << ":(" << endl;

    return 0;
}