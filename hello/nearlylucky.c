#include <stdio.h>
#include <string.h>

int main()
{
    char str[19];
    scanf("%s",str);

    int a=0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]=='4' || str[i] =='7')
        {
            a++;
        }
        
    }
    if (a == 4 || a==7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    
    
}