#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int arr[n],arr2[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr2[i]);
        }
        sort(arr,arr+n);
        sort(arr2,arr2+n);
        int j = 0;
        int pairs = 0;
        for (int i = n-1; i>= 0; i--)
        {
           while (j<n && arr[j]+arr2[i] < k)
           {
               j++;
           }
           if(j < n){
               pairs++;
               j++;
           }
        }
        printf("%d\n",pairs);
    }
}