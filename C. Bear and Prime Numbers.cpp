#include <bits/stdc++.h>
using namespace std;
vector<int> primes;
int vis[10000000 + 1];
void bitwise_sieve()
{
    int arr[(10000000 >> 6) + 1];
    memset(arr, 0, sizeof(arr));
    for (int i = 3; i * i <= 10000000; i += 2)
    {
        if (!(arr[i >> 6] & (1 << ((i >> 1) & 31))))
        {
            for (int j = i * i; j <= 10000000; j += 2 * i)
            {
                arr[j >> 6] |= (1 << ((j >> 1) & 31));
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= 10000000; i += 2)
    {
        if (!(arr[i >> 6] & (1 << ((i >> 1) & 31))))
        {
            primes.push_back(i);
        }
    }
}
int main()
{
    bitwise_sieve();
    // printf("%d\n",primes.size());
    int n;
    scanf("%d", &n);
    int a[n];
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        vis[a[i]]++;
    }
    long long int ans[primes.size()+1];
    long long int k = -1;
    memset(ans, 0, sizeof(ans));
    for (int i = 0; i < primes.size(); i++)
    {
        for (int j = primes[i]; j <= 10000000; j += primes[i])
        {
            if (vis[j] > 0)
            {
                ans[i] += vis[j];
            }
        }
        if (i > 0)
        {
            ans[i] += ans[i - 1];
        }
    }
    int m;
    scanf("%d\n", &m);
    // printf("%d\n",primes[primes.size()-1]);
    ans[primes.size()] = ans[primes.size()-1];
    primes.push_back(9999992);
    for (int i = 0; i < m; i++)
    {
        int l, r;
        scanf("%d %d", &l, &r);
        int idx1 = lower_bound(primes.begin(), primes.end(), l) - primes.begin();
        int idx2 = lower_bound(primes.begin(), primes.end(), r) - primes.begin();
        if(idx1 == idx2 && idx1 == primes.size()){
            printf("0\n");
            continue;
        }
        if (idx1 == 0)
        {
            k = 0;
        }
        else
        {
            idx1--;
            k = ans[idx1];
        }

        if (primes[idx2] > r)
        {
            idx2--;
        }
        else if(idx2==primes.size()){
            idx2--;
        }
        // printf("%d %d\n",idx1,idx2);
        printf("%lld\n", ans[idx2] - k);
    }
}