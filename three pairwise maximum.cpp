#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        if (x != y && y != z && z != x)
        {
            printf("NO\n");
        }
        else
        {
            int a, b, c;

            if (x == y && y == z)
            {
                a = x;
                b = x;
                c = y;
                printf("YES\n");
                printf("%d %d %d\n", a, b, c);
            }
            else if (x == y && z < x)
            {
                b = x;
                c = z;
                a = 1;
                printf("YES\n");
                printf("%d %d %d\n", a, b, c);
            }
            else if (y == z && x < y)
            {
                c = y;
                a = x;
                b = 1;
                printf("YES\n");
                printf("%d %d %d\n", a, b, c);
            }
            else if (z == x && y < z)
            {
                a = x;
                b = y;
                c = 1;
                printf("YES\n");
                printf("%d %d %d\n", a, b, c);
            }
            else
            {
                printf("NO\n");
            }
        }
    }
}