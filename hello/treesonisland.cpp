#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll getarea(ll x1, ll y1, ll x2, ll y2)
{
    return (x1 * y2 - x2 * y1);
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1;tc <=t; tc++)
    {
        ll n, x0, y0;
        scanf("%lld", &n);
        scanf("%lld %lld", &x0, &y0);
        ll x = x0, y = y0;
        ll area = 0;
        ll cnt = 0;
        n = n - 1;
        ll x1, y1;
        double a;
        while (n--)
        {

            scanf("%lld %lld", &x1, &y1);

            area += getarea(x, y, x1, y1);

            if (x1 - x == 0)
            {
                cnt = cnt + abs(y - y1);
            }
            else if (y1 - y == 0)
            {
                cnt = cnt + abs(x - x1) ;

            }
            else
            {
                cnt +=__gcd(abs(x1-x),abs(y1-y));
            }
            // printf("%lld  \n", cnt);
            x = x1;
            y = y1;
        }
        if (x0 - x1 == 0)
        {
            cnt += abs(y - y0);
            
        }
        else if (y0 - y == 0)
        {
            cnt += abs(x - x0);
            
        }
        else
        {
            cnt +=__gcd(abs(x0-x),abs(y0-y));
        }

        area += getarea(x, y, x0, y0);

        double c = area * 0.5;
        double ans = fabs(c) + 1 - cnt/2.0;
        printf("Case %d: %.0lf\n",tc, ans);

    }
}