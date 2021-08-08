#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    vector<long long int> arr(n);
    vector<long long int> cnt(100000 + 2, 0);
    // memset(cnt, 0, sizeof(cnt));
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
        cnt[arr[i]]++;
    }
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    reverse(arr.begin(), arr.end());
    long long int ans1 = 0;
    long long int ans2 = 0;
    bool vis1[n + 2];
    bool vis2[n + 2];
    memset(vis1, false, sizeof(vis1));
    memset(vis2, false, sizeof(vis2));
    long long int ans = 0;
    int i = 0;
    for (i = 0; i < arr.size(); i++)
    {
        if (arr[i] - arr[i + 1] == 1)
        {
            ans1 = cnt[arr[i]];
            
            ans += max(ans1, ans2);
        }
        else
        {
            ans += cnt[arr[i]] * arr[i];
        }
    }
    printf("%lld\n", ans);
}