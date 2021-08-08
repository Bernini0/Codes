#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int a[n];
    memset(arr, -1, sizeof(arr));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int k = 1;
        int p = a[i] - 1;
        arr[i][i] = a[i];
        int j = i;
        while (p)
        {

            if (i - k >= 0 && arr[j][i - k] == -1)
            {
                arr[j][i - k] = a[i];
                k++;
            }
            else
            {
                arr[j + 1][i - k + 1] = a[i];
                j++;
            }
            p--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != -1)
            {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
}