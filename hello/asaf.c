#include <stdio.h>
int main()
{
    long long int n;
    while (scanf("%lld", &n) == 1)
    {

        long long int count = 2;
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
            for (int i = 2; i < n; i++)
            {

                if (n % i == 0)
                {
                    n = n / i;
                    if (n == i)
                    {
                        count = count + 1;
                        // printf("%d",count);
                        break;
                    }
                    else
                    {
                        count += 2;
                    }
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