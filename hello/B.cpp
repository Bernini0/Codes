#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        int arr2[1001];
        int c,d = 0;
        memset(arr2, 0, sizeof(arr2));
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &c);
            arr[i] = c;
            arr2[c]++;;
        }
        for (int i = 1; i < 1001; i++)
        {
            if(arr2[i]>1){
                d = 1;
                break;
            }
            
        }
        if(d==1){
            printf("0\n");
        }
        else
        {
            sort(arr,arr+n);
        
        int min = abs(arr[0]-arr[1]);
        for (int i = 1; i < n; i++)
        {
            if(abs(arr[i]-arr[i+1]) <= min){
                min = abs(arr[i]-arr[i+1]);
                if(min == 1){
                    break;
                }
            }
        }
        printf("%d\n",min);
        }

        
    }
    
}