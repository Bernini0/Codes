#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n, m,r,c;
        scanf("%lld %lld %lld %lld", &n, &m, &r, &c);
        long long int a,b,d,e;
        a = abs(r-1)+abs(c-1);
        b = abs(r-1)+abs(c-m);
        d = abs(r-n)+abs(c-1);
        e = abs(r-n)+abs(c-m);
        if(a >b)swap(a,b);
        if(b > d)swap(b,d);
        if(d > e)swap(d,e);
        printf("%lld\n",e); 
    }
    
}