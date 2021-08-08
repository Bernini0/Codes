//This is a bruteforce code
//Can be done with Digit Dp
//Original purpose of this problem is to teach Digit Dp(I think)
//So do this using digit Dp
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll bigmod(ll a, ll b){
    if(a==0)return 0;
    if(b < 0) return 0;
    ll porduct = 1ll;
    while (b > 0)
    {
        if(b&1){
            porduct *= a;
            b--;
        }
        a*=a;
        b/=2;
    }
    return porduct;
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        ll n;
        scanf("%lld", &n);
        vector<ll> arr;
        // int pos = 0;
        ll m = 2 * 1ll;
        while (n > 0)
        {
            arr.push_back(n % m);
            // pos++;
            n /= m;
        }
        reverse(arr.begin(), arr.end());
        // for (int i = 0; i < arr.size(); i++)
        // {
        //     printf("%lld",arr[i]);
        // }
        // printf("\n");
        ll ans = 0;
        ll carry = 0;
        m = arr.size()-1;
        for (int i = 0; i <= m; i++)
        {
            if(arr[i]==1){
                ll b = max(m-i,0ll);
                ans += (bigmod(2,m-i-2)*(m-i-1))+(carry*bigmod(2,b));
                // printf("%d-->%lld\n",i,ans);
            }
            if(i-1 >= 0 && arr[i-1]==1 && arr[i]==1)carry++;
        }
        printf("Case %d: %lld\n",tc,ans+carry);
    }
}