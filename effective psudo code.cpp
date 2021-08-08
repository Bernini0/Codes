#include <bits/stdc++.h>
using namespace std;

#define ll long long int
vector<int> prime;
vector<pair<int, ll>> factory;
long long int M = 1000000007;
ll bigmod(ll a, ll b)
{
    if (b == 0)
        return 1;
    else if (b % 2 == 0)
    {
        ll ret = bigmod(a, b / 2);
        return ((ret % M) * (ret % M)) % M;
    }
    else
        return ((a % M) * (bigmod(a, b - 1) % M)) % M;
}

void bitwiseseive(int n)
{
    int arr[n / 32];
    memset(arr, 0, sizeof(arr));
    for (int i = 3; i * i < n; i += 2)
    {
        if (!(arr[i / 32] & (1 << (i & 31))))
        {
            for (int j = i * i; j < n; j += 2 * i)
            {
                arr[j / 32] |= (1 << (j & 31));
            }
        }
    }
    prime.push_back(2);
    for (int i = 3; i < n; i += 2)
    {
        if (!(arr[i / 32] & (1 << (i & 31))))
        {
            prime.push_back(i);
        }
    }
}

void factor(ll a, ll b)
{
    for (int i = 0; i < prime.size() && prime[i] * prime[i] <= a && a > 1; i++)
    {
        int cnt = 0;
        while (a % prime[i] == 0)
        {
            cnt++;
            a /= prime[i];
        }
        if(cnt>0){
        factory.push_back(make_pair(prime[i], cnt*b));
        }
    }
    if (a != 1)
    {
        factory.push_back(make_pair(a, 1*b));
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    prime.clear();
    bitwiseseive(50000);
    for (int tc = 1; tc <= t; tc++)
    {
        ll a, b;
        scanf("%lld %lld", &a, &b);
        factory.clear();
        factor(a,b);
        ll ans = 1;
        // ll c = bigmod(a,b);
        // printf("%d %lld %lld\n",factory.size(),factory[0].second,factory[0].first);
        // printf("%lld\n",c);
        
        for (int i = 0; i < factory.size(); i++)
        {
            factory[i].second++;
            // printf("%lld\n",factory[i].second);
            ll temp = (bigmod(factory[i].first,factory[i].second)-1);
            ll temp1 = bigmod(factory[i].first-1,M-2);
            temp = (temp*temp1)%M;
            ans = ((ans%M)*(temp))%M; 
        }
        ans = (ans+M)%M;
        printf("Case %d: %lld\n",tc, ans);
    }
}