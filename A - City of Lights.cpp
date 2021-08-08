#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int k;
    scanf("%d", &k);
    int max = 0;
    int arr[n + 1];
    memset(arr, 0, sizeof(arr));
    long long int cnt = 0;
    for (int i = 0; i < k; i++)
    {
        int a;
        scanf("%d", &a);
        for (int i = a; i <= n; i += a)
        {
            arr[i]++;
            if (arr[i] % 2 == 1)
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }
        if (max < cnt)
        {
            max = cnt;
            // printf("safsd->%d\n", max);
        }
    }
    printf("%d\n", max);
}