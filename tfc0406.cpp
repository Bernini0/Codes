#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    scanf("%lld", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        ll n, m;
        scanf("%lld %lld", &n, &m);
        if(m==1){
            printf("Case %d: 0 0\n",tc);
            continue;
        }
        m--;
        ll c = 9+8*m;
        double d = sqrt(c);
        c = sqrt(c);
        c-=3;
        c /= 2;
        d-=3;
        d /= 2;
        if(abs(c-d) <= 1e-7){
            printf("Case %d: %lld %lld\n",tc,c,c);
        }
        else
        {
            m = m -((c*(c+3))/2);
            m--;
            printf("Case %d: %lld %lld\n",tc,c+1,m); 
        }
        

    }
}