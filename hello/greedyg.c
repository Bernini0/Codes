#include <stdio.h>
#include <math.h>
int main()
{
    long long int n;
    
    while (scanf("%lld", &n) == 1)
    {
        long long int count = 0;
        if (n == 0)
        {
            return 0;
        }
        else if (n == 1)
        {
            count = 1;
        }
        else
        {
            double a = sqrt(n);
            int b = (int)a;
            for (int i = 1; i <= b; i++)
            {
                if (n % b == 0 && (n/b)!=b)
                {
                    count+=2;
                }
                else if(n % b == 0 && (n/b)==b)
                {
                    count+=1;
                    break;
                }
                
            }
        }
        if (count % 2 == 0)
        {
            printf("no\n");
        }

        else
        {
            printf("yes\n");
        }
    }
    return 0;
}