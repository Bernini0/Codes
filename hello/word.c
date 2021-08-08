#include <stdio.h>
#include <string.h>

int main()
{
    char str[102];
    scanf("%s", str);
    int length =strlen(str);
    //printf("%d",length);
    
    int arr[length];
    int upper=0, lower=0;
    for (int i = 0; i < length && str[i]!='\0'; i++)
    {
        arr[i] = str[i];
    }
   
    for (int i = 0; i < length; i++)

    {
        if (arr[i]<=90)
        {
            upper++;
        }
        else
        {
            lower++;
        }
        
        
    }
    
    if (upper>lower)
    {
        for (int i = 0; i < length; i++)
        {

            if (arr[i]>90)
            {
                printf("%c",arr[i]-32);
            }
            else
            {
                printf("%c",arr[i]);
            }
            
        }
        
    }
    
    else
    {
        for (int i = 0; i < length; i++)
        {
            if (arr[i]<=90)
            {
               printf("%c",arr[i]+32);
            }
            else
            {
                printf("%c",arr[i]);
            }
            

        }
    }
    return 0;
}