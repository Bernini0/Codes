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
        int cnt[100+1];
        int a;
        memset(cnt,0,sizeof(cnt));
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a);
            cnt[a]++;
        }
        int ans = n;
        for (int i = 0; i <= 100; i++)
        {
            if(cnt[i]!=0){
                ans-=cnt[i];
                break;
            }
        }
        printf("%d\n",ans);
    }
    
}