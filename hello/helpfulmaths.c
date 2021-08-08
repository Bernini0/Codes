#include <stdio.h>
#include <string.h>
int main()
{
    char str[107];
    scanf("%s", str);
    int one=0, two=0, three=0;
    

    for (int i = 0; i < strlen(str); i+=2)
    {
        if (str[i]=='1')
        {
            one++;
        }
        else if (str[i]=='2')
        {
            two++;
        }
        else if (str[i]=='3')
        {
            three++;
        }
        
        
    }
    for (int i = 0; i <=((2*one)-2) && one >0; i+=2)
    {
        str[i]='1';
    }
    for (int i = 2*one; i <= (2*one)+(2*two)-2; i+=2)
    {
        str[i]='2';
    }
    for (int i = (2*one)+(2*two); i <= (2*one)+(2*two)+(2*three)-2; i+=2)
    {
        str[i]='3';
    }

    printf("%s",str);
    
    
    return 0;
    
}