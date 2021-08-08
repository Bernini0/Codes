#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int a, b, c, d;
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        if (b >= a)
            printf("%lld\n", b);
        else if (a > b && c <= d)
            printf("-1\n");
        else if(a>b && c>d)
        {
            double z = (double)(a-b)/(c-d);
            double j =  ceil(z);
            // printf("%lf",j);
            long long int k = b + j*c;
            printf("%lld\n",k);
        }
    }
    return 0;
}