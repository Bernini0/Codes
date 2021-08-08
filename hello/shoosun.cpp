#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int boo = 0;
    for (int i = k - 1; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            boo = 1;
            break;
        }
    }
    int count = 0;
    if (boo != 0)
    {
        printf("-1\n");
    }
    
    else
    {
        for (int i = k-1; i > 0; i--)
        {
            if (arr[i] != arr[i-1])
            {
                break;
            }
            else
            {
                count++;
            }
            
        }
        printf("%d\n", k-1-count);
    }

    return 0;
}