#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int n;
    int arr[100005];

    while(t--){
        cin >> n;

        for(int i = 1; i <= n; i++) cin >> arr[i];
        arr[0] = arr[n+1] = -2;

        sort(arr+1, arr+n+1);
        int cnt  = 0;
        for(int i = 1; i <= n; i++){
            if(arr[i]-1 != arr[i-1] && arr[i]+1 != arr[i+1]){
                cnt++;
                arr[i]++;
            }
        }
        cout << cnt << endl;
    }
}