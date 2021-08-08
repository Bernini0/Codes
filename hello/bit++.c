#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int x = 0;
    scanf("%d", &n);
    char str[4];
    for (int i = 0; i < n; i++)
    {
        scanf("%s",str);
        if (strcmp(str,"--X")==0)
        {
            x--;
        }
        else if (strcmp(str,"X--")==0)
        {
            x--;
        }
        
        else
        {
            x++;
        }
        
        
    }
    printf("%d",x);

    return 0;
    
}