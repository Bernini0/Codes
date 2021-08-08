#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if(arr[0] >= 2){
        printf("NO\n");
        return 0;
    }
    int a = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(i==n-1 && arr[i]>=2){
            printf("NO\n");
            return 0;
        }
        if(arr[i] > 2){
            printf("NO\n");
            return 0;
        }
        if(a==0){
            if(arr[i] >= 2){
                printf("NO\n");
                return 0;
            }
            else
            {
                a = arr[i];
            }
            
        }
        else
        {
            if(arr[i]==1){
                a = 0;
            }
            else
            {
                a = 1;
            }
            
        }
        
    }
    if(!a){
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
}