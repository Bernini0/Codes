#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n,c0,c1,h;
        scanf("%d %d %d %d", &n, &c0, &c1, &h);
        char arr[n];
        getchar();
        int zero = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%c", &arr[i]);
            if(arr[i]=='0')zero++;
            else one++;
        }
        long long int ans[n+1];
        for (int i = 0; i <= n; i++)
        {
            ans[i] = (i*c1);
            ans[i] += (n-i)*c0;
            if(i <= one){
                ans[i] += (one-i)*h;
            }
            else
            {
                ans[i] += (i-one)*h;
            }
            
        }
        sort(ans,ans+n+1);
        printf("%lld\n",ans[0]);
        
    }
    
}