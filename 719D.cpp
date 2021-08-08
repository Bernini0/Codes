#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            arr[i] -= (i + 1);
        }
        sort(arr, arr + n);
        long long int ans = 0;
        int i = 1;
        while (i < n)
        {
            long long int cnt = 1;
            while (i < n && arr[i - 1] == arr[i])
            {
                cnt++;
                i++;
            }
            if (cnt > 1)
            {
                cnt *= (cnt - 1);
                cnt /= 2;
                ans += cnt;
            }
            i++;
        }
        printf("%lld\n", ans);
    }
}