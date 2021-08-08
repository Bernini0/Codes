#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        long long int w;
        scanf("%lld", &w);
        int c =0;
        if (w%2 != 0)
        {
            printf("Case %d: Impossible\n",tc);
        }
        else
        {
            long long int a, b;
            a = w/2;
            if (a%2 !=0)
            {
                printf("Case %d: %lld 2\n",tc, a);
            }
            else
            {
                for (long long int i = 4; i <a; i=i+2)
                {
                    b = w/i;
                    c++;
                    if (b*i == w && b%2 !=0)
                    {
                        printf("Case %d: %lld %lld\n",tc, b,i);
                        c =0;
                        
                    }
                    if (c==0)
                    {
                        break;
                    }
                    
                    
                }
                if (c !=0)
                {
                    printf("Case %d: Impossible\n",tc);
                }
                
                
            }
            
            
        }
        
        
    }
    
}