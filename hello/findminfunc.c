#include <stdio.h>

int find_min(int arr[], int n);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n-1];
    for (int i = 0; i < n-1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = find_min(arr, n);

    printf("%d\n", min); 
    
    return 0;
}

int find_min(int arr[], int n){
    int min = arr[0];
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        
    }
    return min;
}