#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, h, m;
    scanf("%d %d %d %d",&a, &b, &h, &m);
    double hour = (h*60)+m;
    hour = (double)hour*0.5;
    double min = m*6;
    double angular_d =abs(hour - min);
    double pi = 2*acos(0);
    double angle = (angular_d*pi)/180;
    double ans = sqrt((a*a)+(b*b)-(2*a*b*cos(angle)));
    printf("%.20lf\n",ans);
    return 0;
    
}