#include <bits/stdc++.h>
using namespace std;
double pi = 2*acos(0.0);
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        double r, x;
        scanf("%lf %lf", &r, &x);
        x = ((pi*x)/180);
        double ans = tan(x/2.0) - (x/2.0);
        ans*= r*r;
        printf("%.10lf\n",ans);
    }
    
}