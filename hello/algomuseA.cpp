#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k = 1, r = 0;
        scanf("%d", &n);
        int arr[n];
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr, arr + n);
        while (r != -1 && k <=1024)
        {

            for (int i = 0; i < n; i++)
            {
                arr2[i] = arr[i] ^ k;
            }
            r = -1;
            sort(arr2, arr2 + n);
            for (int i = 0; i < n; i++)
            {
                
                if (arr[i] != arr2[i])
                {
                    r = 0;
                    break;
                }
            }
            if(r==0){
                k++;
            }

            
        }
        if(r==-1){
            printf("%d\n",k);
        }
        else
        {
            printf("-1\n");
        }
        
        
    }
}