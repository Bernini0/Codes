#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int min = arr[i];
        
        for (int j = i+1; j < n; j++)
        {
            if(arr[j] < min){
                int temp = min;
                min = arr[j];
                arr[j] = temp;
            }
        }
        arr[i] = min;
        
    }
    
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    selection_sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    

}
