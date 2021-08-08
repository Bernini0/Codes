#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;

    int arr[n+1];

    for(int i = 0; i < n; i++) cin >> arr[i];

    int cost[5];
    ll taken[5];

    for(int i = 0; i < 5; i++) cin >> cost[i];
    for(int i = 0; i < 5; i++) taken[i] = 0;
    
    int i = 0;
    int crnt = 0;
    while(i < n){
        crnt += arr[i];

        if(crnt >= cost[0]){
            while(crnt >= cost[0]){
                for(int x = 4; x >= 0; x--){
                    int d = crnt / cost[x];

                    if(d){
                        crnt -= (cost[x]*d);
                        taken[x] += d;
                        break;
                    }
                }
            }
        }
        i++;
    }

    for(int i = 0; i < 5; i++) cout << taken[i] << " ";
    cout << endl << crnt << endl;

    return 0;
}