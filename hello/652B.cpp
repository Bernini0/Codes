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
        getchar();
        char arr[n + 1];
        char arr1[n + 1];
        int one = 0;
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%c", &arr[i]);
            arr1[i] = arr[i];
        }
        int l = 1;
        arr[n] = '\0';
        arr1[n] = '\0';
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr1[i])
            {
                l = 0;
                break;
            }
        }
        if (l == 1)
        {
            for (int i = 0; i < n; i++)
            {
                printf("%c", arr[i]);
            }
            printf("\n");
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (arr1[i] == '0')
                    zero++;
                else
                    break;
            }
            for (int i = n - 1; i >= 0; i--)
            {
                if (arr1[i] == '1')
                    one++;
                else
                {
                    break;
                }
            }
            for (int i = 1; i <= zero; i++)
            {
                printf("0");
            }
            if (one + zero != n)
            {
                printf("0");
                for (int i = 1; i <= one; i++)
                {
                    printf("1");
                }
            }
            printf("\n");
        }
    }
}