#include <stdio.h>

int main()
{
    int t, n, sum =0;
    scanf("%d", &t);
    for (int  tc = 1; tc <= t; tc++)
    {
        getchar();
        sum =0;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            
            for (int i = 0; i < n; i++)
            {
                if (arr[i]<0)
                {
                    arr[i]=0;
                }
                
            }
            
            
        }
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
        }
        printf("Case %d: %d\n",tc, sum);
        
        
    }
    return 0;
    
}