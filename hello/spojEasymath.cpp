#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
ll lcm(ll a, ll b){
    return (a*b)/__gcd(a,b);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll n, m, a, b;
        scanf("%llu %llu %llu %llu", &n, &m, &a, &b);
        if (n > m)
            swap(n, m);
        ll arr[5];
        arr[0] = a;
        ll e = 0, f = 0, g = 0, h = 0;
        e += m / arr[0] - (n-1) / arr[0];
        for (int i = 1; i < 5; i++)
        {
            arr[i] = arr[i - 1] + b;
            e += m / arr[i] - (n-1) / arr[i];
        }
        for (int i = 0; i < 4; i++)
        {
            for (int j = i + 1; j < 5; j++)
            {
                
                f += m / lcm(arr[i],arr[j]) - (n-1) / lcm(arr[i],arr[j]);
            }
        }
        ll cnt = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = i + 1; j < 4; j++)
            {

                
                for (int k = j + 1; k < 5; k++)
                {
                    
                    g += m / lcm(lcm(arr[i],arr[j]),arr[k]) - (n-1) / lcm(lcm(arr[i],arr[j]),arr[k]);
                    
                }
            }
            
        }
        printf("\n\n\n");
        // ll cnt = 0;
        for (int i = 0; i < 2; i++)
        {
            for (int j = i + 1; j < 3; j++)
            {
                
                for (int k = j + 1; k < 4; k++)
                {
                    
                    for (int l = k + 1; l < 5; l++)
                    {
                        
                        h += m / lcm(lcm(lcm(arr[i],arr[j]),arr[k]),arr[l]) - (n-1) / lcm(lcm(lcm(arr[i],arr[j]),arr[k]),arr[l]);
                    }
                }
            }
        }
        ll lcm1 = arr[0];
        for (int i = 1; i < 5; i++)
        {
            lcm1 = lcm(lcm1,arr[i]);
        }
        ll i = m / lcm1 - (n-1) / lcm1;
        ll ans = m - n + 1 - e + f - g + h - i;
        printf("%llu\n", ans);
        // printf("%lld %lld %lld %lld %lld\n",e,f,g,h,i);
    }
}