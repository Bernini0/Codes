#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll k, p, n;
        scanf("%lld %lld %lld", &k, &p, &n);
        ll ans = (k-p)*n;
        if(ans < 0)ans = 0;
        printf("%lld\n",ans);
    }
    
}