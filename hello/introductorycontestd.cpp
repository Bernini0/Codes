#include <bits/stdc++.h>
using namespace std;
int main()
{
    double pi = 2*acos(0);
    int t;
    scanf("%d", &t);
    for (int tc =1; tc <= t; tc++)
    {
        double r;
        scanf("%lf", &r);
        double ans = (r*r)*(4-pi);
        ans = ans;
        printf("Case %d: %.2lf\n",tc,ans);
    }
    

    return 0;
}