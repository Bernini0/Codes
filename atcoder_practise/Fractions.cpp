#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (1)
    {

        int n = rand() % 20 + 3;
        // scanf("%d", &n);
        if (n == 1)
        {
            printf("0\n");
            return 0;
        }
        if (n == 2)
        {
            printf("1\n");
            return 0;
        }
        long long int ans = n - 1 + n - 2;
        for (int i = 3; i < n; i++)
        {
            ans += 2 * ((n - i) / i);
            // printf("%d\n",ans);
            if (n % i == i - 1)
            {
                ans++;
            }
        }
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                int x = i * (j + 1);
                int y = (j) * (i + 1);
                int c = __gcd(x, y);
                x = x / c;
                y /= c;
                if (y - x == 1)
                {
                    printf("%d %d\n",i, j);
                    cnt++;
                }
            }
        }
        if (ans != cnt)
        {
            printf("%d %d %d\n", n, ans, cnt);
            break;
        }
    }
}