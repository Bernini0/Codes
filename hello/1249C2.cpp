#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
ll bigmod(ll a, ll b){
    if(b==0)return 1;
    else if(b%2==0){
        ll ret = bigmod(a,b/2);
        return ret * ret;
    }
    else
    {
        return a*bigmod(a,b-1);
    }
    
}
int main()
{
    int t;
    scanf("%d", &t);
    printf("%d\n", t);
    while (t--)
    {
        ll n;
        scanf("%llu", &n);
        int k = 39;
        ll ans = 0;
        int before = k;
        while (k--)
        {
            if(n >= bigmod(3,k) && (n-bigmod(3,k) <= ((bigmod(3,k)-1)/2))){
                n-= bigmod(3,k);
                ans += bigmod(3,k);
            }
            else if(n >= bigmod(3,k)){
                ans += bigmod(3,before);
                break;
            }
            before = k;
        }
        printf("%llu\n",ans);
    }
    
}