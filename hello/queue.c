#include <stdio.h>
#include <string.h>

int main()
{
    int n, t;
    scanf("%d %d", &n, &t);
    char str[n+7];
    scanf("%s", str);
    while(t--)
    {

    for (int  i = 0; i < n; i++)
    {
        if (str[i] == 'B' && str[i] != str[i+1] && str[i+1] !='\0')
        {
            char c = str[i];
            str[i] = str[i+1];
            str[i+1] = c;
            i++;     
        }

    }
        
    }
    printf("%s", str);

    
}
