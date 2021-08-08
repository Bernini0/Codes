#include <stdio.h>
int main()
{
    int arr[8];
    for (int i = 0; i < 8; i++)
    {
        scanf("%d",&arr[i]);
    }
    int ans;
    /*for (int i = 0; i < 8; i++)
    {
        printf("%d ",arr[i]);
    }*/

    
    for (int i = 0; i <1001; i++)
    {
    
        for(int j = 1; j < 8;j++)
        {
            if (arr[0] <= 0)
            {
                break;
            }
            else
            {
            
                arr[0]=arr[0]-arr[j];
                ans = j;
            }
        }
        if (arr[0] <=0)
        {
            break;
        }
    }
    printf("%d",ans);
    
    
}