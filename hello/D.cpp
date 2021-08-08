#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
       
        if (n <= k)
        {
            printf("1\n");
            continue;
        }
        else if (k == 1)
        {
            printf("%d\n", n);
            continue;
        }

        else
        {
            int d = 0;
            int c = sqrt(n);
            for (int i = 2; i <= c && i <= k; i++)
            {
                if (n % i == 0)
                {
                    int e = n / i;
                    d = 1;
                    if (e <= k)
                    {
                        min = i;
                        continue;
                    }
                    else
                    {

                        printf("%d\n", e);
                        continue;
                    }
                }
            }
            if (d != 1)
            {
                printf("%d\n", n);
            }
        }
    }
}