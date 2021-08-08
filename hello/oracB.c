#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n+1];
        arr[n+1];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int j =1, cnt = 1;
        for (int i = 2; i <= n; i++)
        {
            if (i%j==0 && arr[i]> arr[j])
            {
                j = i;
                cnt++;
            }
            
        }
         printf("%d",cnt);
        
    }
    
}