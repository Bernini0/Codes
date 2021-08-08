#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int number[100005];
    int x;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        number[x]=i;
    }
    int q;
    int m;
    int vatya=0,patya=0;
    scanf("%d",&m);
    while (m--)
    {
        scanf("%d",&q);
        vatya +=number[q];
        patya +=n-number[q]+1; 
    }
    
    printf("%d %d",vatya,patya);
    return 0;
    
}
