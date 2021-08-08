#include <stdio.h>
int * sort(){
    static int arr[12];
    for (int i = 0; i < 12; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int max;
    int pos;
    for (int i = 0; i < 12; i++)
    {
        max = arr[i];
        int temp = arr[i];
        for (int j = i+1; j < 12; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
                pos = j;
            }
            
        }
        if (max != arr[i])
        {
            arr[i] = max;
            arr[pos] = temp;
        }
        
    }
    return arr;
    
}
int main()
{
    int n;
    scanf("%d", &n);
    int * arr1;
    arr1 = sort();
    int cnt = 0;
    int sum = 0;
    for (int i = 0; i <= 12 && sum < n; i++)
    {
        if (cnt == 12 && sum < n)
        {
            printf("-1");
            return 0;
        }
        
        else{
        sum += arr1[i];
        cnt++;
        }
    }
    printf("%d",cnt);

    return 0;
}