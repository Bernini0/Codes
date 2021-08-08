#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    vector<pair<long long int,int>> attack(n),defence(n),health(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld %lld %lld", &attack[i].first, &defence[i].first, &health[i].first);
        attack[i].second = i;
        defence[i].second = i;
        health[i].second = i;
    }
    sort(attack.begin(),attack.end());
    sort(defence.begin(),defence.end());
    sort(health.begin(),health.end());
    bool vis[n];
    memset(vis,false,sizeof(vis));
    for (int i = n-1; i > n-1-k; i--)
    {
        vis[attack[i].second] = true;
        vis[defence[i].second] = true;
        vis[health[i].second] = true;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(vis[i])cnt++;
    }
    printf("%d\n",cnt);
}