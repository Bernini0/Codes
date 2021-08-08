#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);

        while (1)
        {
            long long int p = 0;
            long long int q = n;
            long long int r = 0;
            while (q > 0)
            {
                p += q % 10;
                q /= 10;
            }
            if(__gcd(n,p)> 1)break;
            else n++;
        }
        printf("%lld\n", n);
    }
}