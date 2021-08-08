#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll area(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3)
{
    return x2 * y3 - x3 * y2 - x1 * y3 + x3 * y1 + x1 * y2 - x2 * y1;
}
bool cut(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3, ll x4, ll y4)
{
    ll area1 = area(x1, y1, x2, y2, x3, y3);
    ll area2 = area(x1, y1, x2, y2, x4, y4);
    ll area3 = area(x3, y3, x4, y4, x1, y1);
    ll area4 = area(x3, y3, x4, y4, x2, y2);
    if (area1 * area2 < 0 && area3 * area4 < 0)
        return true;
    else if (area1 == 0 && (x3 - x1) * (x3 - x2) <= 0 && (y3 - y1) * (y3 - y2) <= 0)
        return true;
    else if (area2 == 0 && (x4 - x1) * (x4 - x2) <= 0 && (y4 - y1) * (y4 - y2) <= 0)
        return true;
    else if (area3 == 0 && (x1 - x3) * (x1 - x4) <= 0 && (y1 - y3) * (y1 - y4) <= 0)
        return true;
    else if (area4 == 0 && (x2 - x3) * (x2 - x4) <= 0 && (y2 - y3) * (y2 - y4) <= 0)
        return true;
    else
        return false;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        ll arr[n][4];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld %lld %lld %lld", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3]);
        }
        int k = 1, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            k = 1;

            for (int j = 0; j < n && k != 0; j++)
            {
                if (j == i)
                    continue;
                else
                {
                    
                    if (cut(arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[j][0], arr[j][1], arr[j][2], arr[j][3]))
                        k = 0;
                }
            }
            if (k == 1)
                cnt++;
        }

        printf("%d\n", cnt);
    }
}