#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        int n, dust;
        int temp = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &dust);

            if (dust < 0)
            {
                temp += 0;
            }
            else
            {
                temp += dust;
            }
        }
        printf("Case %d: %d\n", tc,temp);
    }


    return 0;
}