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
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr,arr+n);
        int mini = 2000000000;
        int index1, index2;
        for (int i = 0; i < n-1; i++)
        {
            if(abs(arr[i]-arr[i+1])<mini){
                mini = abs(arr[i]-arr[i+1]);
                index1 = i;
                index2 = i+1;
            }
        }
        printf("%d ",arr[index1]);
        for (int i = index2+1; i < n; i++)
        {
            printf("%d ",arr[i]);
        }
        for (int i = 0; i < index1; i++)
        {
            printf("%d ",arr[i]);
        }
        
        printf("%d\n",arr[index2]);
    }
    
}