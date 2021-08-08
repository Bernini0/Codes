#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n, i;
        scanf("%lld %lld", &n, &i);
        long long int ans = 0;
        while (i%2==0)
        {
            ans+= (n+1)/2;
            n/=2;
            i/=2;
        }
        ans+= (i+1)/2;
        printf("%d\n",ans);
    }
    
}