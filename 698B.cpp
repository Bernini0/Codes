#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, d;
        scanf("%d %d", &n, &d);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int q = n;
        for (int i = 0; i < q; i++)
        {
            n = arr[i];
            if (d == 3)
            {
                if (n > 20 || n == 3 || n == 6 || n == 9 || n == 12 || n == 13 || n == 15 || n == 16 || n == 18 || n == 19)
                {
                    printf("YES\n");
                }
                else
                {
                    printf("NO\n");
                }
            }
            else if (d == 4)
            {
                if ((n % 2 == 0 && (n > 10 || n == 8 || n == 4)) || n >= 40)
                {
                    printf("YES\n");
                }
                else
                {
                    printf("NO\n");
                }
            }
            else if (d == 6)
            {
                if ((n % 2 == 0 && (n > 20 || n == 6 || n == 12 || n == 16 || n == 18)) || n >= 60)
                {
                    printf("YES\n");
                }
                else
                {
                    printf("NO\n");
                }
            }
            else if (d == 7)
            {
                if (n > 60 || n == 7 || n == 14 || n == 17 || n == 21 || n == 24 || n == 27 || n == 28 || n == 31 || n == 34 || n == 35 || n == 37 || n == 38 || n == 41 || n == 42 || n == 44 || n == 45 || n == 47 || n == 48 || n == 49 || n == 51 || n == 52 || n == 54 || n == 55 || n == 56 || n == 57 || n == 59 || n==58)
                {
                    printf("YES\n");
                }
                else
                {
                    printf("NO\n");
                }
            }
            else if (d == 8)
            {
                if ((n % 2 == 0 && (n > 30 || n == 8 || n == 16 || n == 18 || n == 24 || n == 26 || n == 28)) || n >= 80)
                {
                    printf("YES\n");
                }
                else
                {
                    printf("NO\n");
                }
            }
            else if (d == 9)
            {
                if (n > 80 || n == 9 || n == 18 || n == 19 || n == 27 || n == 28 || n == 29 || n == 36 || n == 37 || n == 38 || n == 39 || n == 45 || n == 46 || n == 47 || n == 48 || n == 49 || n == 54 || n == 55 || n == 56 || n == 57 || n == 58 || n == 59 || n == 63 || n == 64 || n == 65 || n == 66 || n == 67 || n == 68 || n == 69 || n == 72 || n == 73 || n == 74 || n == 75 || n == 76 || n == 77 || n == 78 || n == 79)
                {
                    printf("YES\n");
                }
                else
                {
                    printf("NO\n");
                }
            }
            else if (d == 5)
            {
                if (n % 5 == 0 || n >= 50)
                {
                    printf("YES\n");
                }
                else
                {
                    printf("NO\n");
                }
            }
            else if (d == 2)
            {
                if (n % 2 == 0 || n >= 20)
                {
                    printf("YES\n");
                }
                else
                {
                    printf("NO\n");
                }
            }
        }
    }
}