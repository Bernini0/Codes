#include <string.h>
#include <stdio.h>

int main()
{
    char word[101];
    scanf("%s",word);
    int cnt=0;
    for (int i = 0; i <(strlen(word)-1); i++)
    {
        for (int j = i+1; j < strlen(word) && word[i]!='0' ; j++)
        {
            if (word[i]==word[j])
            {
                word[j]='0';
            }
        }
        
    }
    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i]!='0')
        {
            cnt++;
        }
        
    }
    if (cnt%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
    printf("%d",cnt);
    return 0;
    
}