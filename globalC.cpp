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
        long long int sum = 0;
        long long int arr[n + 1];
        long long int ans = 0;
        long long int count = 0;
        for (int i = 1; i <= n; i++)
        {
            scanf("%lld", &arr[i]);
            sum += arr[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] <= 1)
                continue;
            else if (arr[i] > n - i)
            {
                count += min(arr[i] - n + i, arr[i] - 1);
                arr[i] = n - i;
            }
            while (arr[i] > 1)
            {
                int b = i + arr[i];
                while (b <= n)

                {
                    if (arr[b] >= 1)
                    {
                        arr[b]--;
                    }

                    b += arr[b] + 1;
                }
                // printf("%d\n",cnt);
                arr[i]--;
                count++;
            }
        }
        printf("%lld\n", count);
    }
}