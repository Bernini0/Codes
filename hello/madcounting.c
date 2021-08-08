#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        int n;
        scanf("%d", &n);
        int arr[n-1];
        int pop = 0;
        

        

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            arr[i] = arr[i]+1;
        }
        
        for(int i = 0; i < n; i++){
            pop += arr[i];
            int cnt = 0;
            for(int j = i + 1; j < n && cnt < arr[i]-1; j++){
                if(arr[i] == arr[j]){
                    cnt++;
                    arr[j] = 0;
                }
            }
        }

        printf("Case %d: %d\n", tc, pop);
    }
    
}