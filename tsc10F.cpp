#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, t, a, b;
    scanf("%d %d %d %d", &l, &t, &a, &b);
    int time1 = t,time2 = t;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int b,c,d;
        scanf("%d %d %d", &b, &c, &d);
        if(b==1)time1-=d;
        else
        {
            time2-=d;
        }
    }
    long long int e = 1ll*(time1)*a;
    long long int f =  1ll*time2*b;
    long long int ans = (e+f)/l;
    printf("%lld\n",ans);
    
}