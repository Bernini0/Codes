#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll bigmod(ll a, ll b)
{
    if (a == 0)
        return 0;
    ll product = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            product *= a;
            b--;
        }
        a *= a;
        b /= 2;
    }
    return product;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        printf("0 ");
        for (int i = 1; i < n; i++)
        {
            ll p = arr[i];
            ll sum = 0;
            int cnt = 0;
            while (arr[i-1]>0)
            {
                if(arr[i-1]%2==1 && p%2==0)sum+=bigmod(2,cnt);
                p/=2;
                arr[i-1]/=2;
                cnt++;
            }
            arr[i]^= sum;
            printf("%lld ",sum);
        }
        printf("\n");
    }
}