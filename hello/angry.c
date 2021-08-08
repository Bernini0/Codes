#include <stdio.h>
int main()
{
    long long int n,k;
    long long int ans;
    scanf("%lld %lld", &n, &k);

    if (n%2==0)
    {
        if (k <=n/2)
        {
            ans = 1+((k-1)*2);
            printf("%lld",ans);
            return 0;
        }
        else
        {
            ans = (k-(n/2))*2;
            printf("%lld",ans);
            return 0;
        }
        
        
    }
    else
    {
        if (k <=((n-1)/2)+1)
        {
            ans = 1 + ((k-1)*2);
            printf("%lld",ans);
            return 0;
        }
        else
        {
            ans = (k-(((n-1)/2)+1))*2;
            printf("%lld",ans);
            return 0;
        }
        
        
    }
    
    
}