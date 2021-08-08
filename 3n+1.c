#include <stdio.h>
int main()
{
    int a,b,c,d =1;
    while (scanf("%d %d", &a, &b) == 2)
    {
        while (a >=b)
        {
            c =a;
            while (c%2 != 0 || c==1)
            {
                c = 3*c +1;
                d++;

            }
            
        }
            
    }
    
}