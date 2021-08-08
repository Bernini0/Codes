#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d", &n);
    int a[n];
    int b[n];
    for (int i = 0, j = n-1; i < n && j >= 0; i++, j--)
    {
        scanf("%d", &a[i]);
        b [j] = a[i];
    }

    for (int k = 0; k < n ; k++)
    {
        a[k] = b[k];
        printf("%d ",a[k]);
    }
    
}