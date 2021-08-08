#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        double n, m;
        scanf("%lf %lf", &n, &m);
        double c = n * m;
        c = ceil(c / 2);
        printf("%.0lf\n", c);
    }
    return 0;
}