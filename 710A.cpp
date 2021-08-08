#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n, m;
        scanf("%lld %lld", &n, &m);
        long long int x;
        scanf("%lld", &x);
        long long int p = x%n;
        if(p==0)p=n;
        long long int q = (x+n-1)/n;
        long long int ans = (p-1)*m+q;
        printf("%lld\n",ans);
    }
    
}