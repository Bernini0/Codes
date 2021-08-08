#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    int arr[3];

    for (int tc = 1; tc <= t; tc++)
    {
        long long int arr[3];
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < 3; i++)
        {
            scanf("%lld", &arr[i]);
        }

        sort(arr, arr + 3);
        if (arr[0] <= 0)
        {
            printf("Case %d: Invalid\n", tc);
        }

        else if ((arr[0] + arr[1]) <= arr[2])
        {
            printf("Case %d: Invalid\n", tc);
        }
        else
        {

            if (arr[0] == arr[1] && arr[1] == arr[2])
            {
                printf("Case %d: Equilateral\n", tc);
            }
            else if ((arr[0] == arr[1] && arr[1] != arr[2]) || (arr[1] == arr[2] && arr[0] != arr[1]))
            {
                printf("Case %d: Isosceles\n", tc);
            }
            else
            {
                printf("Case %d: Scalene\n", tc);
            }
        }
    }

    return 0;
}