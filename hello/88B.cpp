#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m, x, y;
        scanf("%d %d %d %d", &n, &m, &x, &y);
        getchar();
        char arr[n * m + n];
        for (int i = 0; i < n * m + n; i++)
        {
            scanf("%c", &arr[i]);
        }
        arr[n * m + n] = '\0';
        int d = 0;
        for (int i = 0; i < n * m + n-1 && arr[i]!='\0'; i++)
        {
            if (2 * x <= y)
            {
                if (arr[i] == '.')
                {
                    d += x;
                }
            }
            else
            {
                if (arr[i] == '.' && arr[i + 1] == '.')
                {
                    d += y;
                    i++;
                }
                else if (arr[i] == '.')
                {
                    d += x;
                    
                }
            }
        }
        printf("%d\n", d);
    }
}