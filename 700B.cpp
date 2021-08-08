#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll a, n, b;
        scanf("%lld %lld %lld", &a, &b, &n);
        ll arr1[n];
        ll arr2[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr1[i]);
        }
        
        ll c[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr2[i]);
            c[i] = (arr2[i]+a-1)/a;
        }
        bool no = false;
        for (int i = 0; i < n-1; i++)
        {
            b -= (c[i]*arr1[i]);
            if(b <= 0){
                no = true;
                break;
            }
        }
        if(!no){
            c[n-1]--;
            b-=(c[n-1]*arr1[n-1]);
            if(b <= 0)no = true;
            if(no){
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
            
        }
        else
        {
            printf("NO\n");
        }
        
    }
    
}