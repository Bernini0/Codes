#include <stdio.h>
#include <string.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    getchar();
    char arr[n][m + 1];
    memset(arr, 0, sizeof(arr));
    for (int j = 0; j < n; j++)
    {
        scanf("%s", arr[j]);
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == '.')
                {
                    if (j % 2 == 0)
                    {
                        arr[i][j] = 'B';
                    }
                    else
                    {
                        arr[i][j] = 'W';
                    }
                }
                else
                {
                    continue;
                }
            }
        }
        else
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == '.')
                {
                    if (j % 2 == 0)
                    {
                        arr[i][j] = 'W';
                    }
                    else
                    {
                        arr[i][j] = 'B';
                    }
                }
                else
                {
                    continue;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s", arr[i]);
        printf("\n");
    }
}