#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i+=2)
    {
        scanf("%d",&arr[i]);
        scanf("%d", &arr[i+1]);
        
    }
    int count = 1;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]==arr[i+1])continue;
        else
        {
            count++;
        }
        
    }
    printf("%d\n",count);

    return 0;
    
}