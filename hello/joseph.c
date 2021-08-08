#include<stdio.h>
#include <math.h>

double winner(int n, int q){
    double d = 1;
    while (d <= (q-1)*n)
    {
        d = ceil((q*d)/(q-1));
        
    }
    return d;
}

int main()
{
    int t;
    
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        int n, q;
        scanf("%d %d", &n, &q);

        double d;
        d = winner(n,q);
        double ans = (q*n)+1-d;

        printf("Case %d: %.0lf\n", tc, d);
    }
    
}