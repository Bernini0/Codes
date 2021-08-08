#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int arr1[1000001];
    int arr2[1000001];
    memset(arr1,0,sizeof(arr1));
    memset(arr2,0,sizeof(arr2));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        arr2[arr[i]]++;
    }
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {

        if(arr1[arr[i]]==0){

            for (int j = arr[i]+arr[i]; j <= arr[n-1]; j=j+arr[i])
            {
                arr1[j] = 1;

            }           
        }
    }
    int cnt = 0;
    
    for (int i = 0 ; i < n; i++)
    {
        if(arr1[arr[i]]==0 && arr2[arr[i]]==1){
            cnt++;
        }
    }
    printf("%d\n",cnt);
    
    
}