#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long int n, m;
    while (scanf("%lld %lld", &n, &m) == 2)
    {
        long long int t;
        t = abs(m-n);

        printf("%lld\n", t);
        return 0;
    }
    return 0;

}