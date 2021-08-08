#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    if (str[0]!='1')
    {
        printf("NO\n");
        return 0;
    }

    for (int i = 1; i < strlen(str); i++)
    {
        if ((str[i]!='4') && (str[i] !='1'))
        {
            printf("NO\n");
            return 0;
        }
        if ((str[i]=='4'&& str[i-1]=='4' && str[i-2]=='1') || (str[i]=='4'&& str[i-1]=='1') || str[i]=='1')
        {
            continue;
        }
        else
        {
            printf("NO\n");
            return 0;
        }
        
        
        
        
    }
    printf("YES\n");

    return 0;
    
    
}