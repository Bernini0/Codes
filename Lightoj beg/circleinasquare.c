#include <stdio.h>
#include <math.h>

int main()
{
    double x =2*acos(0.0);
    double r;
    int t;
    scanf("%d", &t);
    for(int tc =1; tc <= t; tc++)
    {
    scanf("%lf", &r);
    double area;
    area = (r*r)*(4-x);
    printf("Case %d: %.2lf\n",tc, area);
    }

}
