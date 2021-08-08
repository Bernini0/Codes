#include <bits/stdc++.h>
using namespace std;
int arr[30000];
struct info
{
    int one, two;
} t[4 * 30000 + 1];
void build(int v, int tl, int tr)
{
    if (tl == tr)
    {
        t[v].one = arr[tl];
        t[v].two = tl;
    }
    else
    {
        int tm = (tl + tr) / 2;
        build(2 * v, tl, tm);
        build(2 * v + 1, tm + 1, tr);
        t[v].one = min(t[2 * v].one, t[2 * v + 1].one)*(tr-tl+1);
        // t[v].two = max(t[v].one*(tr-tl+1), max(t[2 * v].two, t[2 * v + 1].two));
    }
}
int main()
{
    int T;
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++)
    {
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        memset(t, 0, sizeof(t));
        build(1, 0, n - 1);
        printf("Case %d: %d\n", tc, t[1].two);
    }
}