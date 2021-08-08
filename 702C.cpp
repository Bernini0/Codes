#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>v;
int main()
{
    int t;
    scanf("%d", &t);
    ll arr[10000];
    for (int i = 1; i <= 10000; i++)
    {
        arr[i-1] = 1ll*i*i*i;
    }
    while (t--)
    {
        ll n;
        scanf("%lld", &n);
        bool no = true;
        for (ll i = 1; i <= 10000; i++)
        {
            ll c = 1ll*i*i*i;
            c = n - c;
            // printf("ask%d\n",c);
            if(c < 0)break;
            int idx = lower_bound(arr,arr+10000,c)-arr;
            if(arr[idx]==c){
                no = false;
                break;
            }
            // printf("%d\n",idx);
        }
        if(no){
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
        
        
    }
    
}