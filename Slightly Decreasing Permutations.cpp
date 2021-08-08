#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n+1];
    for (int i = 0; i <= n; i++)
    {
        arr[i] = i;
    }
    // sort(arr,arr+n-k-1);
    reverse(arr+n-k,arr+n+1);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}