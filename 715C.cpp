#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ara[2005];
ll dp1[2005][2005] = {-1};
ll dp(ll beg, ll ed)
{
    if(beg > ed) return 0;
    if(dp1[beg][ed] != -1) return dp1[beg][ed];
    ll ans = 0;
    ans += ara[ed] - ara[beg];
    ll ans1 = dp(beg+1,ed) + ans;
    ll ans2 = dp(beg,ed-1) + ans;
    return dp1[beg][ed] = min(ans1, ans2);
}
int main()
{
    ll n;
    cin >> n;
    for(ll i = 1; i <= n; i++){
        cin >> ara[i];
    }
    sort(ara+1, ara+n+1);
    memset(dp1, -1, sizeof(dp1));
    ll t1 = dp(1, n);
    cout << t1 << "\n";
    return 0;
}