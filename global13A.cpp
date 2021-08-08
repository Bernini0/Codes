#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    int n, q;
    scanf("%d %d", &n, &q);
    int one = 0, zero = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] == 1)
            one++;
        else
            zero++;
    }
    while (q--)
    {
        int type;
        scanf("%d", &type);
        if (type == 1)
        {
            int x;
            scanf("%d", &x);
            if (arr[x - 1] == 1)
            {
                one--;
                zero++;
                arr[x - 1] = 0;
            }
            else
            {
                one++;
                zero--;
                arr[x - 1] = 1;
            }
        }
        else
        {
            int k;
            scanf("%d", &k);
            if (k <= one)
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
    }
}