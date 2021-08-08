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
        int cnt[n+1];
        memset(cnt,0,sizeof(cnt));
        int a = -1;
        for (int i = 0; i < n-1; i++)
        {
            scanf("%d", &a);
            cnt[a] = 1;
        }
        for (int i = 1; i <= n; i++)
        {
            if(cnt[i]==0){
                printf("%d\n",i);
                break;
            }
        }
        
    }
    
}