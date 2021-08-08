#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        ll ans = (c*(c-1))/2;
        long long int cnt1[2*100000+1];
        long long int cnt2[2*100000+1];
        int d;
        memset(cnt1,0,sizeof(cnt1));
        memset(cnt2,0,sizeof(cnt2));
        for (int i = 0; i < c; i++)
        {
            scanf("%d", &d);
            cnt1[d]++;
        }
        for (int i = 0; i < c; i++)
        {
            scanf("%d", &d);
            cnt2[d]++;
            
        }
        if(c < 2){
            printf("0\n");
            continue;
        }
        for (int i = 1; i <= a; i++)
        {
            if(cnt1[i] > 1){
                ans -= (1ll*cnt1[i]*(cnt1[i]-1))/2;

                // printf("boy%d\n",ans);
            }
        }
        for (int i = 1; i <= b; i++)
        {
            if(cnt2[i] > 1){
            ans -= (1ll*cnt2[i]*(cnt2[i]-1))/2;
            // pri/ntf("girl%d\n",ans);
            }
        }
        if(ans < 0)ans = 0;
        printf("%lld\n",ans);
        
    }
    
}