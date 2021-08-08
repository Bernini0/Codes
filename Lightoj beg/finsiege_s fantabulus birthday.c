#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long long int t, n, a, b, middle ,root;
    scanf("%lld", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        scanf("%lld", &n);
        root = ceil(sqrt(n));
        middle = root*root-root+1;
        // printf("rot = %lld  mid = %lld\n", root, middle);

        if (root%2 == 0)
        {
            if (middle <=n)
            {
                a = root;
                b = root-(n-middle);
            }
            else
            {
                a = root- (middle-n);
                b = root;
            }
        }
        else
        {
            if (middle <=n)
            {
                a = root - (n-middle);
                b = root;
            }
            else
            {
                a = root;
                b = root -(middle-n);
            }
        }
        
        printf("Case %d: %lld %lld\n",tc, a,b);
    }
    


}