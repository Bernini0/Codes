#include <bits/stdc++.h>
using namespace std;
int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
char arr[20][20];
bool f(int a, int b, int h, int w)
{
    if (a < 0 || a >= h || b >= w || b < 0 || arr[a][b] != '#')
        return false;
    return true;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int h, w;
        scanf("%d %d", &h, &w);

        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                arr[i][j] = '#';
            }
        }

        for (int i = 0; i < w; i++)
        {
            if (arr[0][i] == '#')
            {
                arr[0][i] = '1';
                for (int j = 0; j < 8; j++)
                {
                    if (f(0 + dx[j], i + dy[j], h, w))
                    {
                        arr[0 + dx[j]][i + dy[j]] = '0';
                    }
                }
            }
        }
        for (int i = 0; i < w; i++)
        {
            if (arr[h - 1][i] == '#')
            {
                arr[h - 1][i] = '1';
                for (int j = 0; j < 8; j++)
                {
                    if (f(h - 1 + dx[j], i + dy[j], h, w))
                    {
                        arr[h - 1 + dx[j]][i + dy[j]] = '0';
                    }
                }
            }
        }
        for (int i = 1; i < h; i++)
        {
            if (arr[i][0] == '#')
            {
                arr[i][0] = '1';
                for (int j = 0; j < 8; j++)
                {
                    if (f(i + dx[j], 0 + dy[j], h, w))
                    {
                        arr[i + dx[j]][0 + dy[j]] = '0';
                    }
                }
            }
        }
        for (int i = 1; i < h; i++)
        {
            if (arr[i][w - 1] == '#')
            {
                arr[i][w - 1] = '1';
                for (int j = 0; j < 8; j++)
                {
                    if (f(i + dx[j], w - 1 + dy[j], h, w))
                    {
                        arr[i + dx[j]][w - 1 + dy[j]] = '0';
                    }
                }
            }
        }
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if(arr[i][j]=='#')arr[i][j] = '0';
                printf("%c", arr[i][j]);
            }
            printf("\n");
        }
    }
}