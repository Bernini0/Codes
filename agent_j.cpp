#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++){
        double r1,r2,r3;
        scanf("%lf %lf %lf", &r1, &r2, &r3);
        double a = r1+r2, b = r2+r3, c = r3+r1;
        double alpha = acos((b*b+c*c-(a*a))/(2*b*c));
        double beta = acos((c*c+a*a-(b*b))/(2*c*a));
        double gamma = acos((a*a+b*b-(c*c))/(2*a*b));
        double s = (a+b+c)/2.0;
        double area = s*(s-a)*(s-b)*(s-c);
        area = sqrt(area);
        area -= 0.5*((r1*r1*beta)+(r2*r2*gamma)+(r3*r3*alpha));
        printf("Case %d: %.10lf\n",tc,area);
    }
}