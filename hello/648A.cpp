#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        int arr[n][m];
        int arr1[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &arr[i][j]);

                arr1[i][j] = arr[i][j];
            }

        }
        int r = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                arr[i][0] += arr[i][j];
            }
            if (arr[i][0] > 0)
            {
                r++;
            }
        }
        int c = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr1[0][i] += arr1[j][i];
            }
            if (arr1[0][i] > 0)
            {
                c++;
            }
        }
        int z = max(c, r);
        if (z == c)
        {
            z = n - z;
        }
        else
        {
            z = m - z;
        }
        if (z % 2 == 1)
        {
            printf("Ashish\n");
        }
        else
        {
            printf("Vivek\n");
        }
    }
}