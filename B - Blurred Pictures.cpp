#include <bits/stdc++.h>
using namespace std;
int n, l[100005], r[100005];
bool check(int i, int k)
{
    if (r[i] - l[i] + 1 < k)
        return false;
    if (i + k - 1 > n)
        return false;
    int ll = max(l[i], l[i + k - 1]);
    bool p = r[i] - ll + 1 >= k && r[i + k - 1] - ll + 1 >= k;
    if(p){
        printf("adsa%d %d\n",i,k);
    }
    return p;
}

int main()
{

    scanf("%d", &n);
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++){
        scanf("%d%d", &l[i], &r[i]);
        v.push_back({l[i],r[i]});
    }
    int k = 1;
    for (int i = 1; i <= n; ++i)
    {
        while (check(i, k + 1)){
            ++k;
            printf("as_%d\n",i);
        }
    }
    printf("%d\n", k);
    int p = n;
    // scanf("%d", &p);
    int a, b;
    int arr[p + 1];
    memset(arr, 0, sizeof(arr));

    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d %d", &a, &b);
    //     v.push_back({a,b});
    // }
    int ans = 1;
    for (int i = 0; i < v.size();)
    {
        int cnt = 1;
        int l = i;
        bool no = false;
        int c = v[i].second - v[i].first + 1;
        if (c <= ans)
        {
            i++;
            continue;
        }
        while (l < v.size() - 1 && v[l + 1].second >= v[i].first + c - 1 && v[l + 1].first <= v[i].second - c + 1)
        {
            cnt++;
            l++;
        }
        if (ans < min(c, cnt))
        {
            ans = min(c, cnt);
        }
        i++;
    }
    // printf("%d\n", ans);
    if(ans != k){
        printf("%d %d\n",ans,k);
        for (int i = 1; i <= n; i++)
        {
            printf("%d %d\n",l[i],r[i]);
        }
        
    }
}