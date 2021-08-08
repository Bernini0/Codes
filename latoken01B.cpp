#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        ll arr[n];
        ll arr2[n-1];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
            if(i > 0){
                arr2[i-1] = arr[i]-arr[i-1];
            }
        }
        ll ans = arr[0] + arr[n-1];
        for (int i = 0; i < n-2; i++)
        {
            if(arr2[i+1]>0 && arr2[i] >= 0)continue;
            else if(arr2[i+1]< 0 && arr2[i] <= 0)continue;
            else if(arr2[i]==0)continue;
            else if(arr2[i+1] > 0 && arr2[i] < 0){
                ll a = min(abs(arr2[i]), arr2[i+1]);
                arr2[i+1]-=a;
                arr2[i]+= a;
                ans+= a;
            }
            else if(arr2[i+1] < 0 && arr2[i] > 0){
                ll a = min(abs(arr2[i+1]), arr2[i]);
                arr2[i+1]+= a;
                arr2[i]-= a;
                ans+= a;
            }
        }
        for (int i = 0; i < n-1; i++)
        {
            ans+= abs(arr2[i]);
        }
        printf("%lld\n",ans);
    }
    
}