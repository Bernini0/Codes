#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n,k;
        scanf("%d %d",&n , &k);
        if (n%2==0)
        {
            printf("%d\n",(n+(2*k)));
        }
        else
        {
            for (int i = 3; i <= n ; i+=2)
            {
                int j = n%i;
                if (j==0)
                {
                    printf("%d\n",(n+i+2*(k-1)));
                    break;
                }
                
            }
            
        }
        
        
    }
    return 0;
    
}