#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod = 1000000000 + 7;
int main()
{
    int t;
    scanf("%d", &t);
    ll fact[2 * 100000 + 1];
    fact[0] = 1;
    for (int i = 1; i < 2 * 100000 + 1; i++)
    {
        fact[i] = fact[i - 1] * i;
        fact[i] %= mod;
    }

    while (t--)
    {
        int n;
        scanf("%d", &n);
        ll arr[n];
        ll a;
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        sort(arr, arr + n);
        a = arr[0];
        int cnt = 1;
        ll ans = 1ll;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] != a)
                break;
            else
                cnt++;
        }
        // printf("%d\n", cnt);
        if (cnt >= 2)
        {
            bool no = false;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == a)
                    continue;
                else
                {
                    ll b = a & arr[i];
                    if (a != b)
                    {
                        no = true;
                        break;
                    }
                }
            }
            if (no)
            {
                printf("0\n");
            }
            else
            {
                ans *= cnt;
                ans %= mod;
                ans *= (cnt - 1);
                ans %= mod;
                ans *= fact[n - 2];
                ans %= mod;
                printf("%lld\n", ans);
            }
        }
        else
        {
            printf("0\n");
        }
    }
}
