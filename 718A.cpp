#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll n;
        scanf("%lld", &n);
        if(n%2050!=0){
            printf("-1\n");
            continue;
        }
        ll p = n/2050;
        ll ans = 0;
        while (p > 0)
        {
            ans+=(p%10);
            p/= 10;
        }
        printf("%lld\n",ans);
    }
    
}