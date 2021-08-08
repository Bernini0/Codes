#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    scanf("%d %d", &n, &s);
    if (n == 1 && s!= 1)
    {
        printf("yes\n");
        printf("%d\n",s);
        printf("%d\n",s-1);
    }
    else if (s / n >= 2)
    {
        printf("yes\n");

        int d = floor(s * 1.0 / n);

        for (int i = 1; i < n; i++)
        {
            printf("%d ", s / n);
        }
        printf("%d\n", (s / n) + (s % n));
        printf("1\n");
    }
    else
    {
        printf("no\n");
    }
}