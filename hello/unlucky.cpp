#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    // printf("%d",n);
    int arr[n];
    int arr2[n];
    char str[2*n+1];
    scanf("%s",str);
    for (int i = 0; i < n; i++)
    {
        arr[i] = str[i]-48;
    }
    for (int i = n; i < 2*n; i++)
    {
        arr2[i-n] = str[i]-48; 
    }
    
    int d = 0, e = 0,f = 0;
    sort(arr, arr+n);
    sort(arr2,arr2+n);
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>arr2[i]){
            e = 1;
        }
        else if(arr[i] == arr2[i]){
            f = 1;
        }
        else
        {
            d = 1;
        }
        
    }
    if((d==1 && e == 1) || f==1){
        printf ("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
    
    
}