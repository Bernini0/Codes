#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        int n, q;
        scanf("%d %d", &n, &q);
        double d = 1;
        
        while (d <= (q-1)*n)
        {
           d = ceil((q*d)/(q-1));
        }
        double ans = (q*n)+1-d;
        printf("%lf\n", d);
        
    }

    return 0;
    
}