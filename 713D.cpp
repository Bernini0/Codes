#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        ll arr[n + 3];
        arr[n + 2] = 0;
        for (int i = 0; i < n + 2; i++)
        {
            scanf("%lld", &arr[i]);
            arr[n + 2] += arr[i];
        }
        // arr[n+2] = 20000000000000000;
        sort(arr, arr + n + 3);
        ll x = -1;
        ll y = -1;
        for (int i = 0; i < n + 2; i++)
        {
            if (i == n + 1)
            {
                if (arr[n + 2] - arr[n + 1] == 2 * arr[n])
                {
                    x = arr[n + 1];
                    y = arr[n];
                    break;
                }
            }
            else if (arr[n + 2] - arr[i] == 2 * arr[n + 1])
            {
                x = arr[i];
                y = arr[n + 1];
                break;
            }
        }
        if (x != -1)
        {
            for (int i = 0; i < n + 2; i++)
            {
                if (arr[i] == x)
                {
                    x = -1;
                    continue;
                }
                if (arr[i] == y)
                {
                    y = -1;
                    continue;
                }
                if (arr[i] != x && arr[i] != y)
                {

                    printf("%lld ", arr[i]);
                }
            }
            printf("\n");
        }
        else
        {
            printf("-1\n");
        }
    }
}