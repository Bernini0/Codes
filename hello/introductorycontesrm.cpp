#include <bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        long long int w;
        scanf("%lld", &w);
        if (w % 2 == 1)
        {
            printf("Case %d: Impossible\n", tc);
        }
        else
        {
            long long int divident = w / 2;
            if (divident % 2 == 0)
            {
                long long int i=1, j;
                while (divident > 0)
                {
                    
                    divident /= 2;
                    if (divident % 2 == 1 && (double)divident == (long long int)divident)
                    {
                        j = 1;
                        break;
                    }
                    else
                    {
                        i++;
                    }
                }
                if (j == 1)
                {
                    long long int ans =pow(2,i);
                    printf("Case %d: %lld %lld\n",tc, divident, ans);
                }
                else
                {
                    printf("Case %d: Impossible\n", tc);
                }
            }
            else
            {
                printf("Case %d: %lld 2\n", tc, w / 2);
            }
        }
    }
}