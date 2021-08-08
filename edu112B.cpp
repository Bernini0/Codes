#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int w, h;
        scanf("%d %d", &w, &h);
        int x1, x2, y1, y2, w1, h1;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        w1 = x2 - x1;
        h1 = y2 - y1;
        int w2, h2;
        scanf("%d %d", &w2, &h2);
        if (w1 + w2 > w && h1 + h2 > h)
        {
            printf("-1\n");
            continue;
        }
        else if (h1 + h2 <= h && w1 + w2 <= w)
        {
            int ans = 1000000000;
            ans = min(ans,max(w2-x1,0));
            ans = min(ans, max(h2 - y1, 0));
            ans = min(ans, max(y2 - h + h2, 0));
            ans = min(ans,max(x2-w+w2,0));
            printf("%lf\n", (double)ans);
        }
        else if (w1 + w2 > w)
        {
            int ans = 1000000000;
            // ans = min(ans,max(w2-x1,0));
            ans = min(ans, max(h2 - y1, 0));
            ans = min(ans, max(y2 - h + h2, 0));
            // ans = min(ans,max(x2-w+w2,0));
            printf("%lf\n", (double)ans);
        }
        else if (h1 + h2 > h)
        {
            int ans = 1000000000;
            ans = min(ans,max(w2-x1,0));
            // ans = min(ans, max(h2 - y1, 0));
            // ans = min(ans, max(y2 - h + h2, 0));
            ans = min(ans,max(x2-w+w2,0));
            printf("%lf\n", (double)ans);
        }

    }
}