#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k1, k2;
        scanf("%d %d %d", &n, &k1, &k2);
        int w, b;
        scanf("%d %d", &w, &b);
        bool ok = true;
        // if((max(k1,k2)-min(k1,k2))%2==1)ok = false;
        int a1 = min(k1, k2) + ((max(k1, k2) - min(k1, k2)) / 2);
        int a2 = n - max(k1, k2) + ((max(k1, k2) - min(k1, k2)) / 2);

        if (a1 >= w && a2 >= b)
            printf("YES\n");
        else
        {
            printf("NO\n");
        }
    }
}