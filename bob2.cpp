#include <bits/stdc++.h>
using namespace std;
#define llu unsigned long long int
llu bigmod(llu a, llu b)
{
    if (b == 0)
        return 1;
    else if (b % 2 == 0)
    {
        llu ret = bigmod(a, b / 2);
        return ret * ret;
    }
    else
    {
        return a * bigmod(a, b - 1);
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        llu k, x, y, z;
        cin >> k >> x >> y >> z;
        llu r = x * bigmod(10, k) * y;
        r /= (z - y);
        int ans = 0;
        while (r >= 1)
        {
            ans += (r % 10);
            r /= 10;
        }
        cout << "Winning percentage of Drump is: " << ans << "%" << endl;
    }
}