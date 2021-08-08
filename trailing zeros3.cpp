#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll zero(ll a){
    ll ans = 0;
    while (a>0)
    {
        ans += a/5;
        a /= 5;
    }
    return ans;
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        ll n;
        scanf("%lld", &n);
        ll right = 100000000000000;
        ll left = 1;
        ll ans = 0;
        while (right >= left)
        {
            ll middle = (right+ left)/2;
            if(zero(middle)==n){
                ans = middle;
                right = middle -1;
            }
            else if(zero(middle) > n){
                right = middle -1;
            }
            else
            {
                left = middle +1;
            }
            
        }
        if(ans != 0){
            printf("Case %d: %lld\n",tc,ans);
        }
        else
        {
            printf("Case %d: impossible\n",tc);
        }
        
        
    }
    
}