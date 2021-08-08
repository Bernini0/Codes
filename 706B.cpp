#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        bool mex[100000 + 5];
        memset(mex, false, sizeof(mex));
        int a;
        int maxi = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a);
            if (a < 100005)
                mex[a] = true;
            maxi = max(maxi, a);
            v.push_back(a);
        }
        set<int> s;
        for (int i = 0; i < v.size(); i++)
        {
            s.insert(v[i]);
        }

        int me_x;
        for (int i = 0; i < 100005; i++)
        {
            if (!mex[i])
            {
                me_x = i;
                break;
            }
        }
        if (maxi > me_x)
        {
            if (k > 0)
            {
                s.insert((maxi + me_x + 1) / 2);
            }
            printf("%d\n", s.size());
        }
        else
        {
            printf("%d\n", s.size() + k);
        }
    }
}