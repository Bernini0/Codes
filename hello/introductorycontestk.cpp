#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double pi = 2*acos(0.0);
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++){
       double r;
       double n;
       scanf("%lf %lf", &r,&n);
       double r2;
       double angle = sin(pi/n);
       r2 = (r*angle)/(1+angle);

       printf("Case %d: %.6lf\n",tc,r2);
    }
}