#include <bits/stdc++.h>
using namespace std;

int arr[200005];
int cnt[200005];

int main(){
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        int ans = INT_MAX;
        int ptr = -1;
        memset(cnt, 0, sizeof(cnt));

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            cnt[arr[i]]++;

            if(cnt[arr[i]] >= 2){
                while(true){
                    ptr++;
                    cnt[arr[ptr]]--;
                     if(arr[ptr] == arr[i]) break;
                }
                //cout << "i = " << i+1 << " ptr = " << ptr << "  dis = " << i - ptr + 1 << endl;
                ans = min(ans, i - ptr + 1);
            }
        }
        if(ans == INT_MAX)
            cout << "-1" << endl;
        else cout << ans << endl;
    }
    return 0;
}