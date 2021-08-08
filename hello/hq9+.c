#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    scanf("%s",str);
    // printf("%s",str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]=='H' || str[i]=='Q' || str[i] == '9')
        {
            printf("YES\n");

            return 0;
        }
        
    }
    printf("NO");
    return 0;
}