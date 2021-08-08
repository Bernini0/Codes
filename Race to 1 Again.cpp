#include <bits/stdc++.h>
using namespace std;
vector<int> primes;
void bitwise_seive()
{
    int arr[(100000 >> 6) + 1];
    memset(arr, 0, sizeof(arr));
    for (int i = 3; i * i <= 100000; i += 2)
    {
        if (!(arr[i >> 6] & (1 << ((i >> 1) & 31))))
        {
            for (int j = i * i; j <= 100000; j += 2 * i)
            {
                arr[j >> 6] |= (1 << ((j >> 1) & 31));
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= 100000; i += 2)
    {
        if (!(arr[i >> 6] & (1 << ((i >> 1) & 31))))
        {
            primes.push_back(i);
        }
    }
}
vector<pair<int, int>> factory[100000 + 1];
void factor(int n)
{
    int p = n;
    for (int i = 0; primes[i] * primes[i] <= n; i++)
    {
        if (n % primes[i] == 0)
        {
            int cnt = 0;
            while (n % primes[i] == 0)
            {
                n /= primes[i];
                cnt++;
            }
            factory[p].push_back({primes[i], cnt});
        }
    }
    if (n > 1)
    {
        factory[p].push_back({n, 1});
    }
}
int bigmod(int a, int b)
{
    if (a == 0)
        return 0;
    int product = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            product *= a;
            b--;
        }
        b /= 2;
        a *= a;
    }
    return product;
}
vector<int> v;
vector<int> divisors[100000 + 1];
void f(vector<pair<int, int>> &a, int b, int c, int index)
{
    if (index == b)
    {
        int a = v[0];
        for (int i = 1; i < v.size(); i++)
        {
            a *= v[i];
        }
        divisors[c].push_back(a);
    }
    else
    {
        for (int i = 0; i <= a[index].second; i++)
        {
            v.push_back(bigmod(a[index].first, i));
            f(a, b, c, index + 1);
            v.pop_back();
        }
    }
}
double dp[100000 + 1];
double solve(int a)
{
    if (fabs(dp[a] + 1.0) > 1e-8)
        return dp[a];
    if (divisors[a].size() == 2)
    {
        return dp[a] = 2.0;
    }
    else
    {
        dp[a] = 0.0;
        for (int i = 1; i < divisors[a].size() - 1; i++)
        {
            dp[a] += solve(divisors[a][i]);
            // printf("%d %lf\n",divisors[a][i],dp[a]);
        }
        dp[a] += divisors[a].size();
        // printf("%lf\n",dp[a]);
        dp[a] /= (double)(divisors[a].size() - 1);
        return dp[a];
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    bitwise_seive();
    dp[1] = 0.0;
    for (int i = 2; i <= 100000; i++)
    {
        factor(i);
        f(factory[i], factory[i].size(), i, 0);
        dp[i] = -1.0;
    }
    for (int tc = 1; tc <= t; tc++)
    {
        int n;
        scanf("%d", &n);
        double ans = solve(n);
        printf("Case %d: %.10lf\n",tc, ans);
    }
}