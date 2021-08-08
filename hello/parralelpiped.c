#include <stdio.h>
#include <math.h>
int main()
{
    double m,n,o;
    scanf("%lf %lf %lf", &m, &n, &o);
    double a =sqrt((n/m)*o);
    double b = n/a;
    double c = o/a;
    //printf("%lf %d %d\n",a, b, c);
    double ans =(4*a)+(4*b)+(4*c);
    printf("%.0lf",ans);
}