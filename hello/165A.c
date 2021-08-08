#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[2*n];
    int arr2[2*n];
    memset(arr2,0,sizeof(arr2));
    
    for (int i = 0; i < 2*n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 2*n; i+=2)
    {
        int right=0,left=0;
        for (int j = 0; j < 2*n; j+=2)
        {
            if((arr[j]<=arr[i]-1)&&arr[j+1]==arr[i+1])
            {
                right=1;
            }
            if((arr[j] >= arr[i]+1)&&arr[j+1]==arr[i+1])
            {
                left=1;
            }
            
            if(right==1 && left==1)
            {
                arr2[i]=1;
                break;
            }
            
        }
        
    }
       for (int i = 1; i < 2*n; i+=2)
    {
        int up=0,down=0;
        for (int j = 1; j < 2*n; j+=2)
        {
            if ((arr[j]<=arr[i]-1)&&arr[j-1]==arr[i-1])
            {
                up=1;
            }
            if((arr[j] >= arr[i]+1)&&arr[j-1]==arr[i-1])
            {
                down=1;
            }
            
            if(up==1 && down ==1)
            {
                arr2[i]=1;
                break;
            }
            
        }
        
    }

    int cnt=0;
    for (int i = 0; i < 2*n; i+= 2)
    {
        if (arr2[i]==1 && arr2[i+1]==1)
        {
            cnt++;
        }
        
    }
    printf("%d\n",cnt);
    return 0;
    
    
}