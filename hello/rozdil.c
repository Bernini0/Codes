#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    long long int arr[n];
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    int min=arr[0],cnt=0;
    int my_val =0;
    for (int i = 1; i < n; i++)
    {
    if (arr[i] < min)
    {
        min = arr[i];
        cnt = 0;
        my_val = i;

    }
    
    else if (arr[i]==min)
    {
        cnt++;
    }
    
    
    }
    if (cnt > 0)
    {
        printf("Still Rozdil");
        return 0;
    }
    else
    {
        printf("%d",my_val+1);
    }
    

    return 0;
    
}