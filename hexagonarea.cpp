#include <bits/stdc++.h>
using namespace std;
double pi = 2*acos(0.0);
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        double a;
        scanf("%lf", &a);
        double ans = (pi-(sqrt(27)/2))*a*a;
        printf("%.5lf\n",ans);
    }
    
}