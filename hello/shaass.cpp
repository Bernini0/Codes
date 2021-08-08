#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int m;
    scanf("%d", &m);
    while (m--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if(a==1){
            arr[a] = arr[a]+arr[0]-b;
            arr[0] = 0;
        }
        else if(a==n){
            arr[a-2] = arr[a-2]+b-1;
            arr[n-1] = 0;
        }
        else
        {
            arr[a] = arr[a]+arr[a-1]-b;
            arr[a-1] = 0;
            arr[a-2] = arr[a-2]+b-1;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    
    
}