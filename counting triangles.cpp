#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n,m;
        long long int mod = 1000000000+7;
        scanf("%lld %lld", &n, &m);
        long long int ans = (n+1)*(n+2)/2;
        ans%=mod;
        ans*=(m+1);
        ans%=mod;
        printf("%lld\n",ans);

    }
    
}