#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> prime;
vector<ll> ans;
void normal_seive(ll n)
{
    ll a = sqrt(n);
    a = a + 1;
    int arr[a / 32];
    memset(arr, 0, sizeof(arr));
    for (int i = 3; i * i <= a; i++)
    {
        if (!(arr[i/32] & (1<< (i&31))))
        {
            for (int j = i * i; j <= a; j += 2 * i)
            {
                arr[j / 32] |= (1 << (j & 31));
            }
        }
    }
    prime.push_back(2);
    for (int i = 3; i <= a; i += 2)
    {
        if (!(arr[i / 32] & (1 << (i & 31))))
        {
            prime.push_back(i);
        }
    }
}
void segmented_seive(ll a, ll b)
{
    if (a == 1 || a == 0)
        a = 2;
    ll c = b - a + 1;
    c = ceil(c / 32)+1;
    int arr[c];
    int d = sqrt(b);
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < prime.size() && prime[i] * prime[i] <= b; i++)
    {
        ll j = prime[i] * prime[i];
        if (j < a)
        {
            j = ceil(a / prime[i]) * prime[i];
        }
        for (; j <= b; j += prime[i])
        {
            arr[(j - a) / 32] = arr[(j - a) / 32] | (1  << (i&31));
        }
    }
    
    for (ll j = a; j <= b; j++)
    {

        if(!(arr[(j-a)/32] & (1<<((j-a)&31))))
        {
            ans.push_back(j);
        }
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        ll l, r;
        scanf("%lld %lld", &l, &r);
        ans.clear();
        prime.clear();
        if (l > r)
            swap(l, r);
        normal_seive(r);
        printf("%d %d %d\n", prime.size(), prime[0], prime[1]);
        segmented_seive(l, r);
        printf("Case %d: %d\n", tc, ans.size());
        for (int i = 0; i < ans.size(); i++)
        {
            printf("%d ",ans[i]);
        }
        
        // printf("%lld %lld\n", ans[0], ans[1]);
    }
}