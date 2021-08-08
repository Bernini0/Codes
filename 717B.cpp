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
        int arr[n];
        // int b = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            // b^= arr[i];
        }
        bool yes = false;
        int arr2[n];
        int a = 0;
        for (int i = 0; i < n - 1; i++)
        {
            a ^= arr[i];
            int b = 0;
            int c = -1;
            int cnt = 0;
            for (int j = i+1; j < n; j++)
            {
                b ^= arr[j];
                if (a == b)
                {
                    b = 0;
                    cnt++;
                }
            }
            if (a == b || (b == 0 && cnt >= 1))
            {
                printf("YES\n");
                yes = true;
                break;
            }
        }
        if (!yes)
        {
            printf("NO\n");
        }
    }
}
