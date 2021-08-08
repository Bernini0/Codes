#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, x;
        scanf("%d %d", &n, &x);
        int arr[n];
        int sum = 0;
        int k = -1;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum == x)
            {
                k = i;
            }
        }
        if (sum == x)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
            if (k == -1)
            {
                for (int i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    if (i == k)
                        continue;
                    else
                    {
                        printf("%d ", arr[i]);
                    }
                }
                printf("%d\n", arr[k]);
            }
        }
    }
}