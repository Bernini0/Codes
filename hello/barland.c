#include <string.h>
#include <stdio.h>

int main()
{
    char word1[107];
    scanf("%[^\n]%*c", word1);
    char word2[107];
    scanf("%[^\n]%*c",word2);
    char reverse1[107];
    for (int i = 0; i < strlen(word1); i++)
    {
        reverse1[i] = word1[strlen(word1)-i-1];
    }
    printf("%s",word2);
    if (strcmp(reverse1,word2)==0)
    {
        printf("YES\n");
        return 0;
    }
    else
    {
        printf("NO\n");
        return 0;
    }
    return 0;
    
    
}