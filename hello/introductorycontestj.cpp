#include <bits/stdc++.h>
using namespace std;
int main()
{

    double pi = 2 * acos(0.0);

    double a, b, c;
    while(scanf("%lf %lf %lf", &a, &b, &c)==3)
    {
    double d, e, f, r1, r2;
    d = (a + b + c) / 2.0;
    e = d * (d - a) * (d - b) * (d - c);
    f = sqrt(e);
    r1 = (a * b * c) / 4;
    r1 = r1 / f;
    double area1, area2, area3;
    area1 = pi * r1 * r1;
    area1 = area1 - f;
    r2 = f / d;
    area3 = pi * r2 * r2;
    area2 = f - area3;

    printf("%.4lf %.4lf %.4lf\n", area1, area2, area3);
    }


}