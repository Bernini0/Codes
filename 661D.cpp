#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        string s;
        cin >> s;
        set<int> zero, one;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                zero.insert(i);
            else
                one.insert(i);
        }
        bool vis[s.size()];
        memset(vis, false, sizeof(vis));
        int arr[n];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (vis[i])
                continue;

            arr[i] = cnt;
            int k;
            if (s[i] == '0')
            {
                vis[i] = true;
                zero.erase(i);
                k = 1;
            }
            else
            {
                vis[i] = true;
                k = 0;
                one.erase(i);
            }
            int j = i;
            while (1)
            {
                if (k % 2 == 1)
                {
                    auto it = one.lower_bound(j);
                    if (it == one.end())
                    {
                        cnt++;
                        break;
                    }
                    else
                    {
                        vis[*it] = true;
                        arr[*it] = cnt;
                        j = *it;
                        one.erase(it);
                        k++;
                    }
                }
                else
                {
                    auto it = zero.lower_bound(j);
                    if (it == zero.end())
                    {
                        cnt++;
                        break;
                    }
                    else
                    {
                        vis[*it] = true;
                        arr[*it] = cnt;
                        j = *it;
                        zero.erase(it);
                        k++;
                    }
                }
            }
        }
        printf("%d\n",cnt);
        for (int i = 0; i < n; i++)
        {
            printf("%d ",arr[i]+1);
        }
        printf("\n");
    }
}