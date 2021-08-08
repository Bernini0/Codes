#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int arr2[1001];
    memset(arr2, 0, sizeof(arr2));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        int c = arr[i];
        arr2[c]++;
    }
    int j=0;
    if (n % 2 == 1)
    {
        for (int i = 0; i < 1001; i++)
        {

            if (arr2[i] > ((n / 2) + 1))
            {
                j =1;
                printf("NO\n");
                return 0;
            }
            
        }
        if(j!=1){
            printf("YES\n");
            return 0;
        }
    }
    else
    {
        int k =0;
        for (int i = 0; i < 1001; i++)
        {
            if(arr2[i]>(n/2)){
                k = 1;
                printf("NO\n");
                return 0;
            }
            
        }
        if(k!=1){
            printf("YES\n");
            return 0;

        }
        
    }
    
}