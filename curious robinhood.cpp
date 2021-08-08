#include <bits/stdc++.h>
using namespace std;
int arr[100000];
int t[4*100000+1];
void build(int v, int tl, int tr)
{
    if (tl == tr)
    {
        t[v] = arr[tl];
    }
    else
    {
        int tm = (tl + tr) / 2;
        build(2 * v, tl, tm);
        build(2 * v + 1, tm + 1, tr);
        t[v] = t[2 * v] + t[2 * v + 1];
    }
}
void update(int v, int tl, int tr, int pos, int new_val)
{
    if (tl == tr)
    {
        t[v] = new_val;
    }
    else
    {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
        {
            update(2 * v, tl, tm, pos, new_val);
        }
        else
        {
            update(2 * v + 1, tm + 1, tr, pos, new_val);
        }
        t[v] = t[2*v]+t[2*v+1];
    }
}
int sum(int v, int tl, int tr, int l, int r)
{
    if (l > r)
        return 0;
    if (l == tl && r == tr)
        return t[v];
    else
    {
        int tm = (tl + tr) / 2;
        return sum(2 * v, tl, tm, l, min(r, tm)) + sum(2 * v + 1, tm + 1, tr, max(l, tm + 1), r);
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        int n, q;
        scanf("%d %d", &n, &q);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        build(1, 0, n - 1);
        // printf("all sum ----> %d\n",sum(1,0,n-1,0,4));
        printf("Case %d:\n",tc);
        for (int i = 0; i < q; i++)
        {
            int a;
            scanf("%d", &a);
            if (a == 1)
            {
                int b;
                scanf("%d", &b);
                update(1, 0, n - 1, b, 0);
                printf("%d\n", arr[b]);
                // printf("all sum ----> %d\n",sum(1,0,n-1,0,4));
                arr[b] = 0;
                // printf("all sum ----> %d\n",sum(1,0,n-1,0,4));
            }
            else if (a == 2)
            {
                int b, c;
                scanf("%d %d", &b, &c);
                update(1, 0, n - 1, b, arr[b] + c);
                arr[b] += c;
                // printf("all sum ----> %d\n",sum(1,0,n-1,0,4));
            }
            else
            {
                int b, c;
                scanf("%d %d", &b, &c);
                int ans = sum(1, 0, n - 1, b, c);
                printf("%d\n", ans);
                // printf("all sum ----> %d\n",sum(1,0,n-1,0,4));
            }
        }
    }
}