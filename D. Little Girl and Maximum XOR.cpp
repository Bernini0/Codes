#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll powmod(ll a, ll b)
{
    ll product = 1;
    if (a == 0)
        return 0;
    while (b > 0)
    {
        if (b & 1)
        {
            product *= a;
        }
        a *= a;
        b /= 2;
    }
    return product;
}
int main()
{
    ll l, r;
    scanf("%lld %lld", &l, &r);
    int x1 = log10(l) / log10(2);
    int x2 = log10(r) / log10(2);
    // printf("%d %d\n",x1,x2);
    if (x1 != x2)
    {
        printf("%lld\n", powmod(2, x2 + 1) - 1);
    }
    else
    {
        ll x = powmod(2, x2 + 1) - 1;
        // printf("%lld\n",x);
        // printf("%lld %lld\n\n",x-r,x-l);
        if (l == r)
        {
            printf("0\n");
        }
        else if (x - r > r)
        {
            printf("%lld\n", max(powmod(2, x2) - 1, 0ll));
        }
        else if (x - l < l)
        {

            string s1, s2;
            ll c = l, d = r;
            while (c >= 1)
            {
                s1.push_back((c%2)+48);
                c /= 2;
            }
            while (d >= 1)
            {
                s2.push_back((d%2)+48);
                d /= 2;
            }
            reverse(s1.begin(), s1.end());
            reverse(s2.begin(), s2.end());
            // cout << s1 <<" " <<s2 << endl;
            for (int i = 0; i < s1.size(); i++)
            {
                if (s1[i] == s2[i])
                {
                    x2--;
                }
                else
                {
                    break;
                }
            }
            // printf("%d\n",x2);
            printf("%lld\n", powmod(2, x2+1) - 1);
        }
    }
}