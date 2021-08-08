#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y, k, n;
    scanf("%d %d %d", &y, &k, &n);
    int e = k;
    int b = y % k;
    int c = n / k;
    int d = 0;
    int f = (n - y) / k;
    if (k > n)
    {
        printf("-1\n");
        return 0;
    }
    else if (y >= n)
    {
        printf("-1\n");
        return 0;
    }
    else if (e == 1)
    {
        for (int i = 1; i <= n - y; i++)
        {
            if (i == (n - y))
            {
                printf("%d\n", i);
            }
            else
            {
                printf("%d ", i);
            }
        }
        return 0;
    }
    else if (c == 1)
    {
        printf("%d", k - b);
        return 0;
    }
    else if (c > 1 && f > 0)
    {
        for (int i = k - b; i <= (n - y); i = i + k)
        {

            printf("%d ", i);

            d = i;
        }

        printf("%d\n", d + k);
    }

    return 0;
}
    printf("-1\n");
}