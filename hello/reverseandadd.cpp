#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {

        ll n, k = 0;
        scanf("%lld", &n);
        do
        {

            ll q = n;

            int m = 1 + floor(log10(n));
            int digit[m];
            if (k == 0)
            {
                for (int i = 0; i < m; i++)
                {
                    digit[i] = q % 10;
                    q = q / 10;
                }
                reverse(digit, digit + m);
                for (int i = 0; i < m; i++)
                {
                    int d = pow(10, i);
                    n = n + (digit[i] * d);
                }
                k++;
            }
            else
            {
                for (int i = 0; i < m; i++)
                {
                    digit[i] = q % 10;
                    q = q / 10;
                }
                reverse(digit, digit + m);
                int c = 0;
                for (int i = 0; i < m / 2; i++)
                {
                    if (digit[i] != digit[m - 1 - i])
                    {
                        c = 1;
                        break;
                    }
                }
                if (c == 1)
                {
                    for (int i = 0; i < m; i++)
                    {
                        int d = pow(10, i);
                        n = n + (digit[i] * d);
                    }
                    k++;
                }
                else
                {
                    printf("%lld %lld\n", k, n);
                    break;
                }
            }

        } while (k < 1000 && n <= 4294967295);
    }
}