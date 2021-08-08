#include <bits/stdc++.h>
using namespace std;
int main()
{
    double pi = 2 * acos(0.0);
    double volume;
    int t;
    while(scanf("%d",&t)==1)
    {
        volume = 0;
        if (t == 0)
            return 0;
        else
        {
            for (int i = 0; i < t; i++)
            {
                double thick, x0, y0;
                scanf("%lf %lf %lf", &thick, &x0, &y0);
                double x1 = x0, y1 = y0, x2, y2, area = 0;
                while (scanf("%lf %lf", &x2, &y2) == 2)
                {
                    area += (x1 * y2 - x2 * y1);
                    x1 = x2;
                    y1 = y2;
                    if (x1 == x0 && y1 == y0)
                        break;
                }
                volume += fabs(area) * thick;
            }
            double r,d;
            scanf("%lf %lf",&r,&d);
            volume = floor(volume/(2*r*r*pi*d));
            printf("%.0lf\n",volume);
        }
    }
}