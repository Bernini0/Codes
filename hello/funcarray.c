#include <stdio.h>

int find_max(int arr[],int n){
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        //return max;
    }
    return max;
    }
int main()
{
    int arr[] = {-100, 0, 52, 22, 23, 89, -243, 201, 3, 85, 100};
    int n =11;
    int max = find_max(arr, n);
    printf("%d\n", max);

    return 0;
}