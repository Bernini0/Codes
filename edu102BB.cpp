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
        int sum1 = -101;
        int mx1 = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if(i==0){
                sum1 = arr[i];
                mx1 = max(mx1,sum1);
            }
            else
            {
                sum1 += arr[i];
                mx1 = max(mx1,sum1);
            }
            
        }
        int m;
        scanf("%d", &m);
        int arr1[m];
        sum1 = 0;
        int mx2 = 0;
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &arr1[i]);
            if(i==0){
                sum1 = arr1[i];
                mx2 = max(mx2,sum1);
                // printf("%d\n",mx2);
            }
            else
            {
                sum1+=arr1[i];
                mx2 = max(mx2,sum1);
            }
            
        }
        printf("%d\n",mx1+mx2);
        
    }
    
}