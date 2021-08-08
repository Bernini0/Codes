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
        sort(arr,arr+n);
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] <= i+1){
                ans = i + 2;
            }

        }
        
        
        printf("%d\n", ans);

        
    }
    
}