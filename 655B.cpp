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
        if (n % 2 == 0)
        {
            printf("%d %d\n", n / 2, n / 2);
            continue;
        }
        else
        {
            int ans = 1;
            for (int i = 2; i*i <= n; i++)
            {
                if(n%i==0){
                    ans = n/i;
                    break;
                }
            }
            printf("%d %d\n",ans,n-ans);
        }
        
    }
}