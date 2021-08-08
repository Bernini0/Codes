/*
1 to 1000 factor ber koira tarpor vis[t] na hoa porjonto bfs
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> prime;
void seive()
{
    int arr[(1000 << 6) + 1];
    memset(arr, 0, sizeof(arr));
    for (int i = 3; i <= 1000; i += 2)
    {
        if (!(arr[i >> 6] & (1 << ((i >> 1) & 31))))
        {
            for (int j = i * i; j <= 1000; j += 2 * i)
            {
                arr[j >> 6] |= (1 << ((j >> 1) & 31));
            }
        }
    }
    prime.push_back(2);
    for (int i = 3; i <= 1000; i++)
    {
        if (!(arr[i >> 6] & (1 << ((i >> 1) & 31))))
        {
            prime.push_back(i);
        }
    }
}
vector<int> factory[1001];
void factor(int n)
{
    int k = n;
    for (int i = 0; i < prime.size() && prime[i] * prime[i] <= n; i++)
    {
        if (n % prime[i] == 0)
        {
            while (n % prime[i] == 0)
            {
                n /= prime[i];
            }
            factory[k].push_back(prime[i]);
        }
    }
    if (n > 1 && n != k)
    {
        factory[k].push_back(n);
    }
}
bool vis[2000 + 1];
int cnt[2000 + 1];
int bfs(int s, int t)
{
    if (s == t)
        return cnt[s];
    queue<int> q;
    q.push(s);
    vis[s] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        if (u > t)
            continue;
        for (int i = 0; i < factory[u].size(); i++)
        {
            if(u+factory[u][i] <= 1000 && !vis[u+factory[u][i]]){
            vis[u + factory[u][i]] = true;
            cnt[u + factory[u][i]] = cnt[u] + 1;
            if (vis[t] == true)
                return cnt[t];
            q.push(u + factory[u][i]);
            }
        }
    }
    return cnt[t];
}
int main()
{
    int T;
    scanf("%d", &T);
    seive();
    for (int i = 2; i <= 1000; i++)
    {
        factor(i);
    }
    for (int tc = 1; tc <= T; tc++)
    {
        int s, t;
        scanf("%d %d", &s, &t);

        if (s == t)
        {
            printf("Case %d: 0\n", tc);
            continue;
        }
        if (factory[s].size()==0)
        {
            printf("Case %d: -1\n", tc);
            continue;
        }
        if (s > t)
        {
            printf("Case %d: -1\n", tc);
            continue;
        }
        memset(vis,false,sizeof(vis));
        memset(cnt,0,sizeof(cnt));
        int c = bfs(s, t);
        if(c==0){
            printf("Case %d: -1\n",tc);
            continue;
        }
        // printf("%d\n",factory[5][0]);
        printf("Case %d: %d\n", tc, c);
    }
}