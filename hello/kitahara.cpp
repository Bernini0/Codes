#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("NO\n");
        return 0;
    }
    else
    {
        int arr[2];
        memset(arr, 0, sizeof(arr));
        int j;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &j);
            if (j == 100)
            {
                arr[0]++;
            }
            else
            {
                arr[1]++;
            }
        }
        if (arr[0] % 2 == 0 && arr[0] != 0)
        {
            printf("YES\n");
        }
        else if (arr[0] == 0)
        {
            if (arr[1] % 2 == 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}