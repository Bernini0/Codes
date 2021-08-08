#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr, arr + 3);
        if ((arr[0] * arr[0]) + (arr[1] * arr[1]) == (arr[2] * arr[2]))
        {
            printf("Case %d: yes\n", tc);
        }
        else
        {
            printf("Case %d: no\n", tc);
        }
    }
}