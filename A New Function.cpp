#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        ll a;
        scanf("%lld", &a);
        ll ans = 0;
        ll k = sqrt(a);
        for (int i = 2; i <= k; i++)
        {
            ll b = (a/i);
            ans += (b-1)*i;
            ans += b*(b+1)/2;
        }
        ans -=(k-1)*((k*(k+1))/2);
        printf("Case %d: %lld\n",tc, ans);
    }
}