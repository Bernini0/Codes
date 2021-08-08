#include <bits/stdc++.h>
using namespace std;
int main()
{
    double r1, r2, r3, a, b, c, s,alpha, beta, gamma;
    int k;
    scanf("%d", &k);
    while (k--)
    {
        scanf("%lf %lf %lf",&r1, &r2, &r3);

        a = r2 + r3;
        b = r3 + r1;
        c = r1 + r2;
        double d,e,f;
        d = a*a;
        e = b*b;
        f = c*c;
        alpha = acos((e+f-d)/(2*b*c));
        beta = acos((d+f-e)/(2*a*c));
        gamma = acos((d+e-f)/(2*b*a));
        double area1 = (r1*r1*alpha)+(r2*r2*beta)+(r3*r3*gamma);
        area1 = area1/2;
        double area2 = sqrt((r1+r2+r3)*r1*r2*r3);
        double ans = area2-area1;

        printf("%.6lf\n",ans);
    }
    

    return 0;
}