#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n+1];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    arr[n]=arr[0];
    int soldier_no = 0;
    int min = abs(arr[0]-arr[1]);
    // printf("%d",min);
    for (int i = 1; i < n; i++)
    {
        if (abs(arr[i]-arr[i+1]) < min)
        {
            min = abs(arr[i]-arr[i+1]);
            soldier_no = i;
        }
        
    }
    // printf("%d\n",soldier_no);
    if (soldier_no == n-1)
    {
        printf("%d 1", soldier_no+1);
        return 0;
    }
    printf("%d %d",soldier_no+1,soldier_no+2);
    
    return 0;
}