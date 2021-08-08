#include <bits/stdc++.h>
using namespace std;
char arr[11][11];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int m,n;
        scanf("%d %d", &m, &n);
        getchar();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%c", &arr[i][j]);
            }
            getchar();
        }
        
    }
    
}