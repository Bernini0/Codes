#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr, arr + n);
    ll count1 = 0, count2 = 0;
    ll min = arr[0];
    ll max = arr[n - 1];
    for (int i = 0; i <= n-1; i++)
    {
        if (arr[i] == arr[0])
        {
            count1++;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == arr[n - 1])
        {
            count2++;
        }
    }
    if (max == min)
    {
        printf("0 %lld\n",((count2-1 )*count1)/2);
        return 0;
    }
    else
    {
        printf("%d ", arr[n - 1] - arr[0]);
        printf("%lld\n", count2 * count1);
    }

    return 0;
}