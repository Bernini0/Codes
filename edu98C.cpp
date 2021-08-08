#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        ll arr[n];
        ll maximum = -1;
        ll cumu = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
            maximum = max(maximum,arr[i]);
            cumu+= arr[i];
        }
        ll a = cumu;
        sort(arr,arr+n);
        ll y = (cumu+n-1-1)/(n-1);
        cumu = y*(n-1);
        if(y >= arr[n-1]){
            printf("%lld\n",cumu-a);
        }
        else
        {
            printf("%lld\n",maximum*(n-1)-a);
        }
        
    }
    
}