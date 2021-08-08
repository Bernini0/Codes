#include <stdio.h>
int main()
{
    long long n = 0 ,s = 1, d;
    int c,i;

    scanf("%d", &c);
    if (c == 1)
    { 
        printf("1st th fibonacci is 0");
    }
    else if (c == 2)
    {
        printf("2th fibonacci is 1");
    }
    else
    {
        for ( i = 3; i <= c; i++)
        {
            d = n+s;
            n = s;
            s = d;
        }
        
        printf("%dth fibonacci is %.0ld\n",c,d);
    }
    
    
    
}