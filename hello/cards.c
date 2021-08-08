#include <stdio.h>
int main()
{
    int a, b, c, k;
    scanf("%d %d %d %d", &a, &b, &c, &k);
    if (a >= k)
    {
        printf("%d", k);
        return 0;
    }
    else if ((a+b) >= k)
    {
        printf("%d",a);
        return 0;
    }
    else
    {
       int d = k-(a+b);
       int e =(-1)*d;
       printf("%d",a+e);
       return 0;

    }
    
    
    
}