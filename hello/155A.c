#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = n-1; i >0; i--)
    {
        int ismax = 1;
        int ismin = 1;

        int max=arr[i];
        int min = arr[i];
        for (int j = i-1; j >= 0; j--)
        {
            if (arr[j]>max)
            {
                ismax = 0;
            }

            else if (arr[j]==max)
            {
                ismax = 0;
                ismin = 0;
                break;
            }
            else if(arr[j] < min)
            {
                ismin = 0;
            }
        }
        if (ismax == 1 || ismin == 1)
        {
            // printf("%d  %d ", arr[i],i);
            cnt++;
        }
        
        
    }
    printf("%d\n", cnt);

    return 0;
    
    
}