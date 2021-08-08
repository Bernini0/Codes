#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        double pi = 2*acos(0);
        double n;
        scanf("%lf", &n);

        if (n == 2)
            printf("%.9lf\n", n / 2);
        else
        {
            double c = 360 / (2 * n);

            double d = (double)180 - c;
            double r =(d/2)*(pi/180);
            double z = cos(r);
            
            double b = 1 / (2 * z);
            double a = sqrt((b * b) - 0.25);
            printf("%.9lf\n", 2 * a);
        }
    }
}