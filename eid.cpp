#include <bits/stdc++.h>>
using namespace std;
vector<int> primes;
#define ll long long int
int bigmod(int a, int b)
{
    if (a == 0)
        return 0;
    int product = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            product *= a;
            b--;
        }
        a *= a;
        b /= 2;
    }
    return product;
}
void bitwise_seive()
{
    int arr[(10000 >> 6) + 1];
    memset(arr, 0, sizeof(arr));
    for (int i = 3; i * i <= 10000; i += 2)
    {
        if (!(arr[i >> 6] & (1 << ((i >> 1) & 31))))
        {
            for (int j = i * i; j < 10000; j += 2 * i)
            {
                arr[j >> 6] |= (1 << ((j >> 1) & 31));
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i < 10000; i += 2)
    {
        if (!(arr[i >> 6] & (1 << ((i >> 1) & 31))))
        {
            primes.push_back(i);
        }
    }
}
vector<pair<int, int>> cnt;
void f()
{
    for (int i = 0; i < primes.size(); i++)
    {
        cnt.push_back({primes[i], 0});
    }
}
void factor(int n)
{
    for (int i = 0; primes[i] * primes[i] <= n; i++)
    {
        int count = 0;
        while (n % primes[i] == 0)
        {
            count++;
            n /= primes[i];
        }
        if (count > cnt[i].second)
        {
            cnt[i].second = count;
        }
    }
    if (n > 1)
    {
        int idx = lower_bound(primes.begin(), primes.end(), n) - primes.begin();
        if (cnt[idx].second < 1)
        {
            cnt[idx].second = 1;
        }
    }
}
string func(string ans, int b)
{
    // printf("sakdhfkas\n");
    int carry[ans.size()];
    for (int i = 0; i < ans.size(); i++)
    {
        carry[i] = (ans[i] - 48) * b;
    }
    int l = ans.size();
    for (int i = 0; i < l; i++)
    {
        if (i < l - 1)
        {
            ans[i] = (carry[i] % 10)+48;
            carry[i + 1] += carry[i] / 10;
        }
        else
        {
            ans[i] = (carry[i]%10)+48;
            carry[i]/=10;
            while (carry[i] > 0)
            {
                ans.push_back((carry[i]%10)+48);
                carry[i]/=10;
            }
        }
        
    }
    // cout << ans << endl;
    return ans;
}
int main()
{
    int t;
    scanf("%d", &t);
    bitwise_seive();
    // printf("%d\n",primes.size());
    for (int tc = 1; tc <= t; tc++)
    {
        cnt.clear();
        f();
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            factor(arr[i]);
        }
        // printf("sdfsd\n");
        string ans = "1";
        for (int i = 0; i < cnt.size(); i++)
        {
            if (cnt[i].second == 0)
                continue;
            else
            {
                // printf("%d %d ",cnt[i].first,cnt[i].second);
                int k = bigmod(cnt[i].first, cnt[i].second);
                ans = func(ans, k);
                // printf("sadfsadf\n");
            }
        }
        // if(i < 20){
        // pa(ans);
        // }
        printf("Case %d: ", tc);
        // cout << ans << endl;
        reverse(ans.begin(),ans.end());
        cout << ans <<endl;
    }
}
