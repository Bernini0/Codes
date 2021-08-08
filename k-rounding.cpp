#include <bits/stdc++.h>
using namespace std;
vector<int> factor;
void check(int n)
{
    int cnt = 0;
    int m = n;
    while (m % 2 == 0)
    {
        cnt++;
        m /= 2;
    }
    factor.push_back(cnt);
    cnt = 0;
    while (n % 5 == 0)
    {
        cnt++;
        n /= 5;
    }
    factor.push_back(cnt);
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    check(n);
    long long int ans = 1;
    ans *= n;
    while (m - factor[0] > 0)
    {
        ans *= 2;
        factor[0]++;
    }
    while (m - factor[1] > 0)
    {
        ans *= 5;
        factor[1]++;
    }

    printf("%lld\n", ans);
}