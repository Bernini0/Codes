#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for (int tc = 1; tc <= t; tc++)
    {
        long long int s, a, b;
        scanf("%lld", &s);
        a = s;

        double e = sqrt(s);
        s = sqrt(s);
        if (s % 2 == 0)
        {

            if (e != s)
            {
                double z;
                z = ((s + 1) * (s + 1)) - (s * s);
                z = ceil(z / 2.0);
                b = z + (s * s);
                int c = s + 1, d = s + 1;
                if (a - b == 0)
                {
                    printf("Case %d: %d %d\n",tc, d, c);
                }
                else if (a - b < 0)
                {
                    c = c + a - b;
                    printf("Case %d: %d %d\n",tc, d, c);
                }
                else
                {
                    d = d - a + b;
                    printf("Case %d: %d %d\n",tc, d, c);
                }
            }
            else
            {
                printf("Case %d: %lld 1\n",tc, s);
            }
        }
        else
        {
            if (e != s)
            {
                double z;
                z = ((s + 1) * (s + 1)) - (s * s);
                z = ceil(z / 2.0);
                b = z + (s * s);
                int c = s + 1, d = s + 1;
                if (a - b == 0)
                {
                    printf("Case %d: %d %d\n",tc, c, d);
                }
                else if (a - b < 0)
                {

                    d = d + a - b;
                    printf("Case %d: %d %d\n",tc, d, c);
                }
                else
                {
                    c = c - a + b;
                    printf("Case %d: %d %d\n",tc, d, c);
                }
            }
            else
            {
                printf("Case %d: 1 %lld\n",tc, s);
            }
        }
    }
}