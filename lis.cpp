#include <bits/stdc++.h>
using namespace std;
int arr[100001], n;

const int INF = 1000000007;

int leftdp[100005], rightdp[100005];
int leftresult[100005], rightresult[100005];


int main(){
    int t;
    scanf("%d", &t);

    for(int tc = 1; tc <= t; tc++){
        scanf("%d", &n);

        for(int i = 0; i < n; i++) scanf("%d", arr+i);

        leftdp[0] = rightdp[0] = -INF;


        for(int i = 1; i <= n; i++){
            leftdp[i] = rightdp[i] = INF;
        }

        for(int i = 0; i < n; i++){
            int pos = lower_bound(leftdp, leftdp+n+1, arr[i]) - leftdp;
            leftdp[pos] = arr[i];
            leftresult[i] = pos;
        }
        for(int i = n-1; i >= 0; i--){
            int pos = lower_bound(rightdp, rightdp+n+1, arr[i]) - rightdp;
            rightdp[pos] = arr[i];
            rightresult[i] = pos;
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            int minHeight = min(leftresult[i], rightresult[i]);
            ans = max(ans, 2 * minHeight - 1);
        }
        printf("Case %d: %d\n", tc, ans);
    }
    return 0;
}