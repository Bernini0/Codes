#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if(arr[i]%2==1){
                printf("%d ",arr[i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(arr[i]%2==0){
                printf("%d ",arr[i]);
            }
        }
        printf("\n");
    }
    
}