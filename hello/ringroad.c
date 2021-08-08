#include <stdio.h>
int main()
{
    long long int n,m;
    scanf("%lld %lld", &n, &m);
    long long int cnt=0;
    long long int arr[m+1];
    arr[0]=1;
    for (long long int i = 1; i <= m; i++)
    {
        scanf("%lld",&arr[i]);
    }
    for (long long int i = 0; i < m; i++)
    {
        if (arr[i] <= arr[i+1])
        {
            cnt += (arr[i+1]-arr[i]);
        }
        else if(arr[i] > arr[i+1])
        {
            cnt +=(n-(arr[i]-arr[i+1]));
        }
        
        
    }
    printf("%lld\n",cnt);
    
    
}