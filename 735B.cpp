#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(0));
    int z = 100;
    while (z--)
    {
        int n = (rand() % 10) + 2;
        int k = rand() % 10+1;
        // int n = 4;
        // int k = 3;
        int arr[n + 1];
        k = min(n, k);
        for (int i = 1; i <= n; i++)
        {
            arr[i] = rand() % (n+1);
        }
        // arr[1] = 0;
        // arr[2] = 1;
        // arr[3] = 2;
        // arr[4] = 3;
        int maxi = -1000000000;
        int a, b;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == i)
                    continue;
                int c = (i * j) - (k * (arr[i] | arr[j]));
                if (c > maxi)
                {
                    maxi = c;
                    a = i;
                    b = j;
                }
            }
        }
        printf("%d %d\n%d\n%d %d\n",n,k, maxi, a, b);
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}