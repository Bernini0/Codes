#include <stdio.h>
int main()
{
    int t,i=0;
    scanf("%d", &t);
    while (t--)
    {      
        int a, b;
        scanf("%d %d", &a , &b);
        int c = a+b;
        i++;
        printf("Case %d: %d\n",i,c);
    }
    return 0;
}