#include <bits/stdc++.h>
using namespace std;
#define ll long long int
char fnd(ll n, ll m, ll x, ll y)
{
    ll a = n - x + m - y;
    ll b = abs(1 - x) + abs(m - y);
    ll c = abs(n - 1) + abs(1 - y);
    ll d = abs(1 - x) + abs(1 - y);
    vector<pair<int, char>> v;
    v.push_back({a, 'a'});
    v.push_back({b, 'b'});
    v.push_back({c, 'c'});
    v.push_back({d, 'd'});
    sort(v.begin(), v.end());
    return v[3].second;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll n, m, x, y;
        scanf("%lld %lld %lld %lld", &n, &m, &x, &y);
        char c = fnd(n,m,x,y);
        if (c == 'a')
        {
            x = n;
            y = m;
            printf("%lld %lld ", n, m);
        }
        else if (c == 'b')
        {
            x = 1;
            y = m;
            printf("1 %lld ", m);
        }
        else if (c == 'c')
        {
            x = n;
            y = 1;
            printf("%lld 1 ", n);
        }
        else{
            x = 1;
            y = 1;
            printf("1 1 ");
        }
        c = fnd(n,m,x,y);
        if (c == 'a')
        {
            printf("%lld %lld\n", n, m);
        }
        else if (c == 'b')
        {
            printf("1 %lld\n", m);
        }
        else if (c == 'c')
        {
            printf("%lld 1\n", n);
        }
        else{
            printf("1 1\n");
        }
        
    }
}