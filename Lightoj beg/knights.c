#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int t, a,c,d;
    float x;
    scanf("%d", &t);
    for (int tc = 1; tc <=t; tc++)
    {
        //int d;
        scanf("%d %d", &a, &c);
       if (a >2 && c >2)
       {
           x = ceil((a*c)/2.0);
           d =x;
       }
       else if (a ==2 || c ==2)
       {
           if (a == 2 && c == 2)
           {
               d =4;
           }
           else if (((a*c)/2)%4 ==2)
           {
               x = (a*c)/2;
               d = x+2;
           }
           else if ((a*c)%8 == 0)
           {
               x = (a*c)/2;
               d = x;
           }
           
           else if (((a*c)/2)%4 ==1 ||((a*c)/2)%4 == 3)
           {
               x = (a*c)/2;
               d = x+1;
           }
        }
        else
        {
            d =a*c;
        }
        
       
       printf("Case %d: %d\n", tc, d);
       
    }
    return 0;
}