#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int arr[24];
    int i, j;
    for (int k = 0; k < 25; k++)
    {
        scanf("%d", &arr[k]);
    }
    for (int k =0; k < 25; k++)
    {
        if (arr[k]== 1)
        {
            i = ceil((k+1)/5.0);
            j = (k+1)%5;
            if (j == 0)
            {
                j =5;
            }
            
        }
        
    }
    int a = abs(3-i);
    int b = abs(3-j);
    int ans = a+b;
    printf("%d\n",ans);
    //printf("%d", j);

    
    
}