#include <stdio.h>
int main()
{
    int n,c = 0;
    scanf("%d", &n);
    int arr[n+9];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x, y;
    scanf("%d %d", &x, &y);
    for (int i = x; i <= y; i++)
    {
        if (arr[i]>c)
        {
            c = arr[i];
        }
        else
        {
            continue;
        }
        
        
    }
    printf("%d\n",c);
    
}