#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        long long int w, a, b;
        scanf("%lld", &w);
        if (w%2 != 0)
        {
            printf("Case %d: Impossible\n",tc);
        }
        else
        {
            for (long long int  i =w-1; i > 1; i=i-2)
            {
                a = i;
                long long int c = w/a;
                if (w%a ==0 && a*c==w)
                {
                    printf("Case %d:%lld %lld\n",tc, a, c);
                    break;
                    
                }

                
            }
            
        }
        
        
    }
    
}