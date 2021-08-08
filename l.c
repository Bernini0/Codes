#include <stdio.h>
int main()
{
    int n, j = 0, c =0;
    scanf("%d", &n);
    long int arr[n+9];
    while (n--)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%ld", &arr[i]);
        }
        
        for ( j = 0; j < n; j++)
        {
            if (arr[j] == 0 ||  arr[j+1] == 0)
            {
                break;
            }
            else if (arr[j] > arr[j+1])
            {
                arr[j] -=arr[j+1];
            }
            else
            {
                arr[j+1] -= arr[j];
            }

            arr[j+1] = arr[j];
            c++;
            
            
            
        }
        
    }
    printf("%ld\n", &arr[c+1]);
    return 0;
    
    
}