#include <stdio.h>
#include <string.h>
int main()
{
    char str1[1007];
    char str2[1007];
    scanf("%s",str1);
    scanf("%s",str2);
    int length = strlen(str2);
    char str3[length];
    for (int i = 0; i <length -1; i++)
    {
        str3[i] = str2[i];
    }
    str3[length-1]='\0';
    if (strcmp(str1,str3)==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
    
    
}