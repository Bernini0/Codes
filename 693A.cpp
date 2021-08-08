#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int w, h,n;
        scanf("%d %d %d", &w, &h, &n);
        int ans = 1;
        int cnt = 0;
        while (w%2==0)
        {
            if(ans==1){
                ans++;
            }
            else
            {
                ans*= 2;
            }
            w/=2;
        }
        int cnt1 = 0;
        while (h%2==0)
        {
            if(ans==1){
                ans++;
            }
            else
            {
                ans*=2;
            }
            
            h/=2;
        }
        // printf("%d\n",ans);
        if(ans >= n){
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
        
        
    }
    
}