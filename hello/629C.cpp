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
        int arr[20001];
        int arr2[n];
        memset(arr,0,sizeof(arr));
        memset(arr2,-1,sizeof(arr2));
        int c;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &c);
            arr[c] = 1;
            if(arr[c]>1){
                arr2[i] = -c;
            }
            else
            {
                arr2[i] = c;
            }
            
            
        }
        int d =0; 
        for (int i = 0; i < 20001; i++)
        {
            if(arr[i]>0){
                d++;
            }
        }
        
        printf("%d\n",d);
        int r =1;
        for (int i = 0; i < n; i++)
        {
            
        }
        
        
    }
    
}