#include <stdio.h>
#include <string.h>

int main()
{
    int year;
    scanf("%d", &year);
    int cnt=0;
    for (int i = year+1;; i++)
    {
        //int length =snprintf(NULL,0,"%d",i);
        char str[5];
        snprintf(str,5,"%d",i);
        if (str[0]!=str[1] && str[0] != str[2] && str[0] !=str[3] && str[1] !=str[2] &&str[1] !=str[3] &&str[2] !=str[3])
        {
            printf("%d", i);
            return 0;
        }
        
        
        
    }
    return 0;
    
}