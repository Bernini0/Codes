#include <bits/stdc++.h>
using namespace std;
int tree[4 * 100000 + 1];
int toggle[100000 + 1];
void update(int v, int tl, int tr, int l, int r)
{
    if (r < tl || l > tr)
        return;
    if (l <= tl && r >= tr)
    {
        toggle[v] ^= 1;
        return;
    }
    int tm = (tl + tr) / 2;
    update(2 * v, tl, tm, l, r);
    update(2 * v + 1, tm + 1, tr, l, r);
}
int query(int v, int tl, int tr, int pos)
{
    if (pos < tl || pos > tr)
        return 0;
    if (pos >= tl && pos <= tr)
        return toggle[v];
    int tm = (tl + tr) / 2;
    if (pos <= tm)
    {
        return query(2 * v, tl, tm + 1, pos);
    }
    else
        return query(2 * v + 1, tm + 1, tr, pos);
}
int main()
{
    int t, t1;
    scanf("%d", &t);
    t1 = t;
    while (t--)
    {
        int n;
        scanf("%d", &n);
        memset(tree, 0, sizeof(tree));
        memset(toggle, 0, sizeof(toggle));
        int arr[n];
        vector<pair<int, int>> arr_sorted(n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            arr_sorted[i].first = arr[i];
            arr_sorted[i].second = i;
        }
        int cnt[n];
        memset(cnt, 0, sizeof(cnt));
        sort(arr_sorted.begin(), arr_sorted.end());
        // set<pair<int,int>>s;
        // s.insert({arr_sorted[0].second,1});
        // cnt[0] = arr_sorted[0].second%2;
        for (int i = 0; i < n; i++)
        {
            int d = arr_sorted[i].second;
            arr_sorted[i].second += query(1, 0, n - 1, i);
            cnt[i] = abs(arr_sorted[i].second - i) % 2;
            update(1, 0, n - 1, 0, d - 1);
        }
        bool no = false;
        for (int i = 0; i < n - 1;)
        {
            vector<int>v;
            // printf("suakdjhf\n");
            while (i < n - 1 && arr_sorted[i].first == arr_sorted[i + 1].first)
            {
                // printf("%d %d %d\n",cnt[i],cnt[i+1], arr_sorted[i].first);
                if (cnt[i] == 1 && cnt[i + 1] == 1)
                {
                    cnt[i] = 0;
                    cnt[i + 1] = 0;
                }
                // else if(cnt[i]==0 && cnt[i+1]==1)
                //     swap(cnt[i], cnt[i + 1]);
                if(cnt[i]==1 && (v.empty()||v[v.size()-1])!= i)v.push_back(i);
                if(cnt[i+1]==1 && (v.empty()||v[v.size()-1])!=i+1)v.push_back(i+1);
                i++;
            }
            // printf("%ld\n",v.size());
            if(!v.empty() && v.size()%2==0){
                // printf("%d\n",v[i]);
                for (int j = 0; j < v.size(); j+=2)
                {
                    if((v[j+1]-v[j])%2==0){
                        cnt[v[j]] = 0;
                        cnt[v[j+1]] = 0;
                    }
                    else{
                        no = true;
                        break;
                    }
                }
                
            }
            if(no)break;
            i++;
        }
        if(no){
            printf("NO\n");
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            // printf("%d %d %d\n", cnt[i], arr_sorted[i].first, arr_sorted[i].second);
            if (cnt[i])
            {
                // if (n == 1999)
                // {
                //     printf("%d %d %d %d\n", cnt[i], arr_sorted[i].first, arr_sorted[i].second, i);
                // }
                no = true;
                break;
            }
        }
        if (!no)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
}