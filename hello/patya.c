#include<stdio.h>
#include<string.h>
 
int main(void){
    char str1[101],str2[101];
    scanf("%s",str1);
    scanf("%s",str2);
    for (int i = 0,j = 0; i < strlen(str1),j < strlen(str2); i++,j++)
    {
        if (str1[i]<97)
        {
            str1[i]=str1[i]+32;
        }
        if (str2[j]<97)
        {
            str2[i]=str2[i]+32;
        }
        
        
    }
    int ans = strcmp(str1,str2);
    if (ans==0)
    {
        printf("0\n");
    }
    else if (ans >0)
    {
        printf("1\n");
    }
    else
    {
        printf("-1\n");
    }
    
    return 0;    
    

    
}