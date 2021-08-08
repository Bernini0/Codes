#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[200];
    char c;
    memset(arr,0,sizeof(arr));
    char str1[206];
    scanf("%[^\n]%*c",str1);
    for (int i = 0; i <strlen(str1); i++)
    {
        arr[str1[i]]++;
    }
    
    arr[32] = 0;
    int arr2[200];
    memset(arr2,0,sizeof(arr2));
    char str2[206];
    scanf("%[^\n]%*c",str2);
    for (int i = 0; i <strlen(str2); i++)
    {
        arr2[str2[i]]++;
        
    }
    arr2[32] = 0;
    int boo = 0;
    for (int i = 0; i < 200; i++)
    {
        if(arr[i]<arr2[i]){
            boo=-1;
            break;
        }
    }
    if(boo==0){
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
    
    
}