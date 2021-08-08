#include <bits/stdc++.h>
using namespace std;
#define llu unsigned long long int
llu arr[10000001];
void eular_phi()
{
    
    for (int i = 0; i <= 10000000; i++)
    {
        arr[i] = i;
    }
    for (int i = 2; i <= 10000000; i++)
    {
        if(arr[i]==i){
            for (int j = i; j <= 10000000; j+= i)
            {
                arr[j] /= i;
                arr[j] *= (i-1);
            }
            
        }
    }
    for (int i = 1; i <= 10000000; i++)
    {
        arr[i] = arr[i-1]+arr[i];
    }
    
    
}
int main()
{
    eular_phi();
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        llu n , m;
        scanf("%llu %llu", &n, &m);
        if(m>arr[n]){
            printf("Case %d: -1\n",tc);
            continue;
        }
        else
        {
            llu ans;
            int idx = lower_bound(arr,arr+10000001,m) - arr;
            ans = idx;
            ans = n/ans;
            printf("Case %d: %llu\n",tc,ans);
        }
    }
}