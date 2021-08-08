#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n+1];
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]==0){
            cnt++;
        }
    }
    int cnt2[n+1], u, v;
    int cnt3 = 0,cnt4 = 0;
    memset(cnt2,0,sizeof(cnt2));
    for (int i = 1; i <= m ; i++)
    {
        scanf("%d %d", &u, &v);
        if(arr[u]!= arr[v]){
            cnt2[u]++;
            cnt2[v]++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if(cnt2[i]==0){
            if(arr[i]==0){
                cnt4++;
            }
            else{
                cnt3++;
            }
        }
    }
    
    for (int i = 1; i <= n; i++)
    {
        if(arr[i]==1){
            int ans = (n-cnt-1);
            if(cnt2[i]==0){
                ans += (cnt-cnt4)*2 + cnt4*3;
            }
            else{
                ans += cnt2[i];
                ans += (cnt-cnt2[i])*2;
            }
            if(i < n){
            printf("%d ",ans);
            }
            else{
                printf("%d\n",ans);
            }
        }
        else
        {
            int ans = cnt-1;
            if(cnt2[i]==0){
            ans += (n-cnt-cnt3)*2 + (cnt3)*3;
            }
            else{
                ans += cnt2[i];
                ans += (n-cnt-cnt2[i])*2;
            }
            if(i < n){
                printf("%d ",ans);
            }
            else{
                printf("%d\n",ans);
            }
        }
    }
    
}