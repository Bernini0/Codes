#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m;
    scanf("%d %d",&n, &m);
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int arr2[m];
    int cnt=0;
    int min;
    int pos = 0;
    for (int j = 0; j < m; j++)
    {
        min = 0;
        for (int i = 0; i < n; i++)
        {
        
            if (arr[i] < min)
            {
                min = arr[i];
                pos = i;
            }
        }

        cnt = cnt+min;
        arr[pos] = 1001;
        
    }
    printf("%d",abs(cnt));
    return 0;
}