#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, d;
        scanf("%d %d", &n, &d);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr,arr+n);
        if(arr[0]+arr[1] <= d){
            printf("YES\n");
        }
        else
        {
            if(arr[n-1] <= d){
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
            
        }
        
    }
    
}