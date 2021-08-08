#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int c = a % b;
        if (c == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n", b - c);
        }
    }
}