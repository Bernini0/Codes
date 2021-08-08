#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("black.in", "r", stdin);
    freopen("black.out", "w", stdout);
    int w, b;
    scanf("%d %d", &w, &b);
    char c = '@';
    char d = '.';
    int p = min(w, b);
    int k = 0;
    printf("%d 2\n", abs(w - b) * 2 + min(w, b) * 2);
    if (w >= b)
    {
        k = 1;
        for (int i = 0; i < w - b; i++)
        {
            printf("@.\n..\n");
        }
    }
    else
    {
        // int k = 0;
        for (int i = 0; i < b - w; i++)
        {
            printf(".@\n@@\n");
        }
    }
    for (int i = 0; i < 2 * p; i++)
    {
        if (i % 2 == 1)
        {
            if (k == 1)
            {
                printf("@@\n");
            }
            else
            {
                printf("..\n");
            }
        }
        else
        {
            if (k == 1)
            {
                printf("..\n");
            }
            else
            {
                printf("@@\n");
            }
        }
    }
}
