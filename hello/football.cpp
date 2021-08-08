#include <bits/stdc++.h>
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char str1[107];
    char str2[107];
    scanf("%[^\n]%*c",str1);
    char arr[107];
    int str11=1;
    int str12 = 0;
    for(int i = 1; i < n; i++)
    {
        scanf("%[^\n]%*c",str2);
        
        if (strcmp(str1,str2)== 0)
        {
            str11++;
        }
        else
        {
            for (int i = 0; i <=strlen(str2) ; i++)
            {
                arr[i]=str2[i];
            }
            
            str12++;
        }
        
        
    }
    if (str11 > str12)
    {
        printf("%s",str1);
    }
    else
    {
        printf("%s",arr);
    }
    
    
    
}