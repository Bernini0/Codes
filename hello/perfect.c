#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n==0 || n ==1 || n%2!=0)
    {
        printf("-1");
        return 0;
    }
    for (int i = 1; i < n; i++)
    {
        if (i%2!=0)
        {
            printf("%d ",i+1);
        }
        else
        {
            printf("%d ", i-1);
        }
        
        
        
    }
        
    printf("%d\n", n-1);
    return 0;
    
    
}