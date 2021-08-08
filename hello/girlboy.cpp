#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int n, m;
    scanf("%d %d", &n, &m);
    if (n <= m)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("GB");
        }
        for (int i = m - n; i > 0; i--)
        {
            printf("G");
        }
        printf("\n");
    }
    else
    {
        for (int i = 1; i <= m; i++)
        {
            printf("BG");
        }
        for (int i = n - m; i > 0; i--)
        {
            printf("B");
        }
        printf("\n");
    }
    
}
