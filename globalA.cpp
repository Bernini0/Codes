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
        for (int i = 0; i < n; i++)
        {
            if(i%2==0){
                arr[i] = abs(arr[i]);
            }
            else
            {
                arr[i] = (-1)*abs(arr[i]);
            }
            
        }
        for (int i = 0; i < n-1; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("%d\n",arr[n-1]);
        
        
    }
    
}