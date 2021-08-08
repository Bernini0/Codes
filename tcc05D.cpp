#include <bits/stdc++.h>
using namespace std;
#define ll long long int
pair<ll, ll> v1[100003];
bool comparator(const pair<ll, ll> a, const pair<ll, ll> b)
{
    if (a.first != b.first)
        return a.first > b.first;
    else
        return a.second > b.second;
}

int main()
{
    int n;
    scanf("%d", &n);

    // vector<pair<ll,int>>v2(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &v1[i].first);
        // v1[i].second = i;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &v1[i].second);
        // v1[i].second = i;
    }
    sort(v1, v1 + n, comparator);
    ll ans = 0;
    priority_queue<ll> a;
    
    for (int i = 1; i < n; i += 2)
    {
        a.push(v1[i].second*(-1));

        a.push(v1[i + 1].second*(-1));

        a.pop();
    }

    while (!a.empty())
    {
        ans -= a.top();
        // printf("%lld\n",a.top());
        a.pop();
    }

    printf("%lld\n", ans);
}