#include <stdio.h>
int main()
{
    long long int arr[4];
    for(int i=0;i<4;i++){
        scanf("%lld", &arr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j < 4; j++)
        {
            if (arr[i]==arr[j])
            {
                arr[j]=0;
            }
            
        }
        
        
    }
    int cnt=0;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i]!=0)
        {
            cnt++;
        }
        
    }
    printf("%d",4-cnt);
    
    
    
}