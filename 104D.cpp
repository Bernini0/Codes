#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll arr[100000];
    ll k = 3;
    for (int i = 0; i < 100000; i++)
    {
        ll b =  (k*k -1ll)/(2*1ll);
        if(k*k-b > b){
            arr[i] = k*k-b;
        }
        k+=2;
    }
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%lld\n",arr[i]);
    // }
    
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll n;
        scanf("%lld", &n);
        int idx = lower_bound(arr,arr+100000,n)-arr;
        if(arr[idx]==n){
        idx++;
        }
        printf("%d\n",idx);

    }
    
}