#include <string.h>
#include <stdio.h>

int main()
{
    char str[207];
    
    scanf("%s",str);
    char ans[207];
    int length =strlen(str);
    
    for (int i = 0,j=0; i < length; i++,j++)
    {
        if (str[i] == '.')
        {
            ans[j]='0';
        }
        else if (str[i] == '-' && str[i+1] =='.')
        {
            ans[j]='1';
            i++;
        }
        else if (str[i] =='-' && str[i+1]=='-')
        {
            ans[j]='2';
            i++;
        }
        
        
        
    }
    int a = strlen(ans);
    for (int i = 0; i < a; i++)
    {
        if (ans[i] == '0' || ans[i]=='1' || ans[i]=='2')
        {
            printf("%c",ans[i]);
        }
        
        
    }
    
    
}