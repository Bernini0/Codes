#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        memset(arr,0,sizeof(arr+n));
        int arr2[2];
        memset(arr2,0,sizeof(arr2+2));
        int c;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &c);
            arr[i] = c;
            c = c%2;
            if(c==1){
                arr2[1]++;
            }
            else
            {
                arr2[0]++;
            }
            
        }
        
        if(arr2[0]%2==0 && arr2[1]%2 == 0){
            printf("YES\n");
            continue;
        }

            sort(arr, arr+n);
            int d = 0;
            int e;
            for (int i = 1; i < n; i++)
            {
                e = abs(arr[i] - arr[i-1]);
                if(e == 1){
                    d = 1;
                    break;
                }
                
            }
            if(d==1){
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        
    }
    
}