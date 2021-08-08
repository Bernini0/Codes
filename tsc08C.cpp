#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int d;
    scanf("%d %lld", &n, &d);
    long long int arr[n];
    long long int arr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
        arr2[n-1-i] = arr[i];
    }
    long long int mini = 1e18,maxi = -1e18;
    for (long long int i = 1; i <= n; i++)
    {
        maxi = max(arr[i-1]-1ll*d*i,maxi);
        mini = min(arr[i-1]-1ll*d*i,mini);
    }
    long long int ans = maxi-mini;
    maxi = -1e18;
    mini = 1e18;
    for (long long int i = 1; i <= n; i++)
    {
        maxi = max(arr2[i-1]-1ll*d*i,maxi);
        mini = min(arr2[i-1]-1ll*d*i,mini);
    }
    ans = min(ans,maxi-mini);
    printf("%lld",ans/2);
    if(ans%2==1){
        printf(".5\n");
    }
    else{
        printf(".0\n");
    }
}