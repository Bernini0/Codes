#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int a;
    int arr[7];
    memset(arr,0,sizeof(arr));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        arr[a]++;
    }
    if(arr[1]!=(n/3) || (arr[2]+arr[3]!=(n/3)) || (arr[4]+ arr[6]!= (n/3)) || arr[3]>arr[6]){
        printf("-1\n");
        return 0;
    }
    else
    {
        for (int i = 1; i <= arr[3]; i++)
        {
            printf("1 3 6\n");
            arr[1]--;
            arr[6]--;
        }
        for (int i = 1; i <= arr[6]; i++)
        {
            printf("1 2 6\n");
            arr[1]--;
        }
        for (int i = 1; i <= arr[1]; i++)
        {
            printf("1 2 4\n");
        } 
    }
    
    return 0;
    
}