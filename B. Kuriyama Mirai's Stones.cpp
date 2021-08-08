#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    scanf("%d", &n);
    ll arr[n+1];
    ll arr2[n+1];
    ll c;
    memset(arr,0,sizeof(arr));
    arr2[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &c);
        arr2[i] = c;
        
            arr[i] = c+ arr[i-1];
        
    }
    sort(arr2,arr2+n+1);
    for (int i = 1; i <= n; i++)
    {
        arr2[i] += arr2[i-1];
    }
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        int t, a, b;
        scanf("%d %d %d", &t, &a, &b);
        if(t==1){
            printf("%lld\n",arr[b]-arr[a-1]);
        }
        else
        {
            printf("%lld\n",arr2[b]-arr2[a-1]);
        }
        
    }
    
}