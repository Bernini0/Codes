#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    ll fact[17];
    fact[0] = 1ll;
    for (ll i = 1; i < 17; i++)
    {
        fact[i] = fact[i - 1] * i;
    }
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        ll base, k;
        string s;
        cin >> base >> k >> s;
        sort(s.begin(),s.end());
        do
        {
            ll a = 0;
            ll b = 1ll;
            int c = 0;
            for (int i = s.size()-1; i >= 0; i--)
            {
                a += (s[i]-48)*b;
                b*= base;
            }
            printf("%lld\n",a);
            while (a > 0)
            {
                // cnt[a % k]++;
                printf("%d ", a % k);
                a /= k;
                c++;
            }
            printf("\n");
        } while (next_permutation(s.begin(), s.end()));
    }
}