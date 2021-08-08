#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max= arr[0];
    int posmax=0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
            posmax = i;
        }
        
    }
    int min = arr[0];
    int posmin = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]<=min)
        {
            min = arr[i];
            posmin = i;
        }
        
    }
    int ans;
    if (posmax > posmin && posmin!=(n-2))
    {
        ans = posmax +(n-posmin-2);
    }
    else if (posmin > posmax)
    {
        ans = posmax+(n-posmin-1);
    }
    else
    {
        ans = posmax;
    }
    
    printf("%d", ans);
    
    return 0;
    
}