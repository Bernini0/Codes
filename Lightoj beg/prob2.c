#include <stdio.h>
int main()
{
    int t,a,b;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (n>10)
        {
            b = 10;
            a = n - b;
        }
        else
        {
            a =0;
            b = n;
        }
        printf("%d %d\n", a, b);
        
        
    }
    return 0;
    
}