#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        long long int n, digit;
        scanf("%lld %lld", &n, &digit);
        long long int divisable = 0;
        int reminder = digit;
        for (int i = 0;; i++)
        {
            reminder = reminder%n;
            if (reminder%n != 0)
            {
                reminder = reminder*10 + digit;
            }
            else
            {
                printf("Case %d: %d\n",tc, i+1);
                break;
            }
            
            
        }
        
    }
    
}