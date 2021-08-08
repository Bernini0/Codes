#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0, arr[n], cnt = 0,churi= 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    sort(arr,arr+n);
    for (int i = n-1; i >=0; i--)
    {
        if(sum >= churi){
            churi += arr[i];
            cnt++;
            sum =sum - arr[i];
        }
        
    }
    printf("%d\n", cnt);
    
}