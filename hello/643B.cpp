#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n + 1];
    int arr2[100001];
    memset(arr2, 0, sizeof(arr2));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    arr[n] = 0;
    int count = 0;
    for (int i = 0; i < n && (arr[i] != 0); i++)
    {
        int cnt = 0;
        int cnr2 = 0;
        int a, c = 0;
        for (int j = i + 1; j <= n; j++)
        {

            if (arr[i] == arr[j])
            {
                arr[j] = 0;
                if (cnt == 0)
                {
                    cnt = j - i;
                    c = j - i;
                }

                else if (cnt != 0 && ((j - i) - cnt) == c)
                {
                    cnt = (j - i);
                }
                else if (cnt != 0 && ((j - i) - cnt != c))
                {
                    cnr2 = j - i;
                    cnt = (j - i);
                }
            }
        }
        if (cnr2 != 0)
        {
            arr[i] = 0;
        }
        a = arr[i];
        arr2[a] = c;
    }
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] != 0)
        {
            count++;
        }
    }
    sort(arr, arr + (n + 1));
    printf("%d\n", count);
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] != 0)
        {
            int b = arr[i];
            printf("%d %d\n", arr[i], arr2[b]);
        }
    }
}