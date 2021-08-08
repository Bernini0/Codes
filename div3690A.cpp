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
        }
        int arr2[n];
        int k = 0;
        for (int i = 0; i < n/2; i++)
        {
            arr2[k] = arr[i];
            k++;
            arr2[k] = arr[n-1-i];
            k++;
        }
        if(n%2==1){
            arr2[k] = arr[n/2];
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ",arr2[i]);
        }
        printf("\n");
    }
    
}