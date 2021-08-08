#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100],str2[100];
    scanf("%s",str1);
    getchar();
    scanf("%s",str2);
    for (int i = 0; i < strlen(str2); i++)
    {
        if (str1[i]=='1'&&str1[i]!=str2[i])
        {
            printf("1");
        }
        else if (str2[i]=='1'&&str1[i]!=str2[i])
        {
            printf("1");
        }
        
        else
        {
            printf("0");
        }
        
        
    }
    return 0;
    
}