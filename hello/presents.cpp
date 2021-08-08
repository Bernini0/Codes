#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen(input.txt,"r",stdin);
    int n;
    scanf("%d", &n);
    int arr[n+1];
    for (int i = 0; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }
    int arr2[n];
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[j]==(i+1)){
                arr2[i] = j+1;
            }
        }
        
    }
    for (int i = 0 ;i < n; i++)
    {
        printf("%d ", arr2[i]);
    }
    
    
}