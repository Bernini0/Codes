#include <bits/stdc++.h>
using namespace std;
#define intt long long int
int main()
{
    intt t;
    scanf("%lld", &t);
    while (t--)
    {
        intt n, k;
        scanf("%lld %lld", &n, &k);
        intt m = n*k;
        intt arr[m+1];
        for (int i = 1; i <= m ; i++)
        {
            scanf("%lld", &arr[i]);
        }
        intt l = (n+1)/2;
        intt x = l-1;
        l = n-x;
        intt p = l;
        intt ans = 0;
        if(n == 2){
            // int ans = 0;
            for (int i = 1; i <= m; i+= 2)
            {
                ans += arr[i];
            }
            printf("%lld\n",ans);
            continue;
        }
        for (int i = n*k; i > x*k ; i--)
        {
            if(p > 1){
                p--;
                
            }
            else
            {
                p = l;
                ans += arr[i];
            }
            
        }
        printf("%lld\n",ans);
    }
    return 0;
}