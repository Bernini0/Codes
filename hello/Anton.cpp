#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr1[100000];
    int arr[3000];
    memset(arr,0,sizeof(arr));
    for (int i = 0;; i++)
    {
        scanf("%c", &arr1[i]);
        if(arr1[i]=='}'){
            break;
        }
        arr[arr1[i]] = 1;
        
    }
    
    int cnt = 0;
    for (int i = 97; i < 123; i++)
    {
        if(arr[i]==1){
            cnt++;
        }
    }
    printf("%d\n",cnt);
    
    
}