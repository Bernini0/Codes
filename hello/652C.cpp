#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int sum = 0;
        int n, m;
        scanf("%d %d", &n, &m);
        int arr[n];
        int abc[m];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr, arr + n);
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &abc[i]);
            if (abc[i] == 1)
            {
                sum += (2 * arr[n - 1]);
                n--;
            }
        }

        sort(abc, abc + m);
        reverse(abc,abc+m);
        int j = 0;
        for (int i = 0; i < m; i++)
        {
            if (abc[i] != 1)
            {
                sum += arr[n - 1] + arr[j];
                n--;
                j += abc[i] - 1;
            }
        }
        printf("%lld\n", sum);
    }
}