#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    int n, temp;
    int arr[105];
    int first = -1;
    int crnt = -1;
    while(t--){
        cin >> n;
        
        for(int i = 0; i < n; i++) cin >> arr[i];
        arr[n] = 100000;
        first = 0;
        crnt = 1;

        while(crnt <= n){
            if(arr[crnt] != arr[crnt-1]+1){
                if(crnt > first + 2){
                    cout << arr[first] << "..." << arr[crnt-1];
                    if(crnt != n) cout << ",";
                }
                else{
                    for(int i = first; i < crnt; i++){
                        cout << arr[i];
                        if(i != n-1) cout << ",";
                    }
                }
                first = crnt;
                crnt = crnt+1;
            }
            else{
                crnt++;
            }
        } 
        cout << endl;
    }
}