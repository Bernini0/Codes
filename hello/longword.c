#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    char word[101];
    scanf("%s",word);
    int middle;
    int length = strlen(word);
    if (length>10)
    {
        middle=length-2;
        printf("%c%d%c\n",word[0],middle,word[length-1]);
    }
    else
    {
        printf("%s\n",word);
    }
    
    
    }

    return 0;
    
}
