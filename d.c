#include <stdio.h>
int main()
{
    int b,j,i;
    int a[1009];
    scanf("%d", &b);
    for ( i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);    
    }
    for ( j = 0; j < b; j=j+2)
    {
        printf("%d\n",a[j]);
    }
    return 0;    
}