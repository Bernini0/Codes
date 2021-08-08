#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll area(ll x1, ll y1,ll x2,ll y2,ll x3,ll y3){
    return x2*y3-x3*y2-x1*y3+x3*y1+x1*y2-x2*y1;
}
double pi = 2 * acos(0.0);
ll getarea(ll x1, ll y1, ll x2,ll y2, ll x3, ll y3,ll x4,ll y4){
    ll area1 = area(x1,y1,x2,y2,x3,y3);
    ll area2 = area(x1,y1,x2,y2,x4,y4);
    ll area3 = area(x3,y3,x4,y4,x1,y1);
    ll area4 = area(x3,y3,x4,y4,x2,y2);
    // printf("%lld %lld %lld %lld\n\n",area1,area2,area3,area4);
    if(area1*area2 >= 0 && area3*area4 >= 0){
        ll area5 = area(x2,y2,x3,y3,x1,y1);
        ll area6 = area(x2,y2,x3,y3,x4,y4);
        ll area7 = area(x1,y1,x4,y4,x3,y3);
        ll area8 = area(x1,y1,x4,y4,x2,y2);
        // printf("%lld %lld %lld %lld\n",area5,area6,area7,area8);
        if(area5*area6 >= 0) return 0;
        else
        {
            return 2;
        }
        
    }
    else return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        ll x1, y1, x2, y2, x3, y3, x4, y4;
        scanf("%lld %lld %lld %lld %lld %lld %lld %lld", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
        ll k = getarea(x1, y1, x2, y2, x3, y3, x4, y4);
        if(k == 1){
            swap(x2,x3);
            swap(y2,y3);
        }
        else if(k==2){
            swap(x3,x4);
            swap(y3,y4); 
        }
        // printf("%lld %lld %lld %lld %lld %lld %lld %lld\n", x1, y1, x2, y2, x3, y3, x4, y4);
        double a, b, c, d, e;

        a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
        c = sqrt((x3 - x4) * (x3 - x4) + (y3 - y4) * (y3 - y4));
        d = sqrt((x4 - x1) * (x4 - x1) + (y4 - y1) * (y4 - y1));
        e = (x2 - x4) * (x2 - x4) + (y2 - y4) * (y2 - y4);
        if (fabs(a - b) <= 1e-5 && fabs(a - c) <= 1e-5 && fabs(a - d) <= 1e-5)
        {
            if (fabs((a * a + d * d) - e) <= 1e-5)
            {
                printf("Case %d: Square\n",tc);
            }
            else
            {
                printf("Case %d: Rhombus\n",tc);
            }
        }
        else if (fabs(a - c) <= 1e-5 && fabs(b - d) <= 1e-5)
        {
            if (fabs((a * a + d * d) - e) <= 1e-5)
            {
                printf("Case %d: Rectangle\n",tc);
            }
            else
            {
                printf("Case %d: Parallelogram\n",tc);
            }
        }
        else
        {
            if ((y2 - y1) * (x4 - x3) == (x2 - x1) * (y4 - y3) || (y3 - y2) * (x1 - x4) == (y1 - y4) * (x3 - x2))
            {
                printf("Case %d: Trapezium\n",tc);
            }
            else
            {
                printf("Case %d: Ordinary Quadrilateral\n",tc);
            }
        }
    }
}