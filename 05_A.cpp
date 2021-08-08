#include <bits/stdc++.h>
using namespace std;
//calculating the value of pi
double pi = 2 * acos(0.0);
int main()
{
    double h, a, b;
    scanf("%lf %lf %lf", &h, &a, &b);
    //converting a,b to radian
    a *= (pi / (180 * 1.0));
    b *= (pi / (180 * 1.0));
    //area of left triangle is 0.5*h*h*tan(angle)
    a = tan(a);
    b = tan(b);
    // printf("%lf %lf\n",a,b);
    double ans = h*h*(a+b);
    ans/=2.0;
    printf("%lf\n",ans);
}