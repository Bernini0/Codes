#include <stdio.h>
int main()
{
    int n, m, o;
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &n, &m, &o);
        if (n >= 1)
        {
            printf("00");
            for (int i = 2; i <= n; i++)
            {
                printf("0");
            }
        }

        if (m >= 1 && n != 0)
        {
            printf("1");
            for (int i = 2; i <= m; i++)
            {
                if (i % 2 == 0)
                {
                    printf("0");
                }
                else
                {
                    printf("1");
                }
            }
        }

        else if(m >=1 && n ==0 && m%2 !=0)
        {
            printf("01");
            for (int i = 2; i <= m; i++)
            {
                if (i % 2 == 0)
                {
                    printf("0");
                }
                else
                {
                    printf("1");
                }
            }
        }
        else if(m >=1 && n ==0 && m%2 ==0)
        {
            printf("01");
            for (int i = 2; i < m; i++)
            {
                if (i % 2 == 0)
                {
                    printf("0");
                }
                else
                {
                    printf("1");
                }
            }
        }
        
        if (o >= 1 && m != 0 && m % 2 != 0)
        {
            printf("1");
            for (int i = 2; i <= o; i++)
            {
                printf("1");
            }
        }
        else if ((o >= 1 && m == 0))
        {
            printf("11");
            for (int i = 2; i <= o; i++)
            {
                printf("1");
            }
        }
        else if ((o >= 1 && m % 2 == 0 ))
        {
            printf("1");
            for (int i = 2; i <= o; i++)
            {
                printf("1");
            }
        }
        
        if(m%2==0 && m!= 0) printf("0");

        printf("\n");
    }

    return 0;
}