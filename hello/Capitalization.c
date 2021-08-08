#include <string.h>
#include <stdio.h>

int main()
{
    char str[1001];
    scanf("%s",str);
    
    int a = str[0];
    if (a > 90)
    {
        a -=32;
    }
    printf("%c",a);
    for (int i = 1; i < strlen(str); i++)
    {
        printf("%c",str[i]);
    }

    return 0;
    
    
}