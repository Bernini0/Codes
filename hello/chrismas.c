#include <stdio.h>
#include <string.h>

int main()
{
    int arr1[26]={0};
    int arr2[26]={0};
    char guest[101],host[101],letters[101];
    scanf("%s",guest);
    // getchar();
    scanf("%s",host);
    // getchar();
    scanf("%s",letters);
    if ((strlen(guest)+strlen(host)) != strlen(letters))
    {
        printf("NO\n");
        return 0;
    }
   
    else
    {
        for (int i = 0; i < strlen(guest); i++)
        {
            arr1[guest[i]-65]++;
        }
        for (int i = 0; i < strlen(host); i++)
        {
            arr1[host[i]-65]++;
        }

        for (int i = 0; i < strlen(letters); i++)
        {
            arr1[letters[i]-65]--;
        }
        
        
        for(int i = 0; i < 26; i++){
            if(arr1[i] != 0){
                printf("NO\n");
                return 0;
            }
        }

        printf("YES\n");
    }
    
    
}