#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int arr[n], sum[n + 1];
    sum[0] = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);

        sum[i + 1] = sum[i] + arr[i];
    }
    long long int ans = 0;
    map<long long int, long long int> p;
    p[0] = 0;
    long long int last = 0;
    for (long long int i = 1; i <= n; i++)
    {
        if (p.count(sum[i]))
        {
            last = max(last, p[sum[i]] + 1);
        }
        ans += (i-last);
        p[sum[i]] = i;
    }
    printf("%lld\n", ans);
}