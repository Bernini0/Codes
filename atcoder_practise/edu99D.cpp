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
        vector<int> arr(n);
        vector<int> arr2(n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        arr2 = arr;
        sort(arr2.begin(), arr2.end());
        bool no = false;
        for (int i = 0; i < n; i++)
        {
            if (arr2[i] != arr[i])
            {
                no = true;
                break;
            }
        }
        if (!no)
        {
            printf("0\n");
            continue;
        }
        // sort(arr2.begin(),arr2.end());
        // int i = 0;
        int cnt = 0;
        while (1)
        {
            bool yes = false;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > x)
                {
                    int temp = arr[i];
                    arr[i] = x;
                    x = temp;
                    yes = true;
                    // cnt++;
                    break;
                }
            }

            if (yes)
            {
                cnt++;
                // continue;
            }
            else
            {
                // for (int i = 0; i < n; i++)
                // {
                //     printf("%d ", arr[i]);
                // }

                no = true;
                break;
            }
            // i++;
            arr2 = arr;
            sort(arr2.begin(), arr2.end());
            if (arr2 == arr)
            {
                no = false;
                break;
            }
        }
        if (no)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", cnt);
        }
    }
}