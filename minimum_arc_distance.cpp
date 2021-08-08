#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        int x1, y1, x2, y2, x3,y3;
        scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
        double a = (1.0*(x2-x3)*(x2-x3))+(1.0*(y2-y3)*(y2-y3));
        double r = (1.0*(x1-x2)*(x1-x2))+(1.0*(y1-y2)*(y1-y2));
        double theta = acos(1.0-(0.5*(a/r)));
        double s = sqrt(r)*theta;
        printf("Case %d: %.10lf\n",tc,s);
    }
    
}