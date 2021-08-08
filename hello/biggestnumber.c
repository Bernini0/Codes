#include <stdio.h>
int main()
{
    int five = 0, zero = 0;
    int a = 5;
    int b;
    int n;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d",&b);
        if (b==a)
        {
            five = (five+1);
        }
        else
        {
            zero++;
        }
        
        
    }
    five = five/9;
    if (five >=1 && zero >=1)
    {
        for (int i = 1; i <= five*9; i++)
        {
            printf("5");
        }
        for (int j = 1; j <= zero; j++)
        {
            printf("0");
        }
        
        
    }
    else if(zero >=1)
    {
        printf("0");
    }
    else
    {
        printf("-1");
    }
    
    
    
    
}