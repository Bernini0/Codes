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
        int cnt[101];
        memset(cnt,0,sizeof(cnt));
        int a;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a);
            cnt[a]++;
        }
        sort(cnt,cnt+101);
        printf("%d\n",cnt[100]);
    }
     
}