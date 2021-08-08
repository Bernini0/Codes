#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll n, w;
        scanf("%lld %lld", &n, &w);
        ll cumu[n];
        vector<pair<ll,ll>>arr;
        ll a;
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &a);
            arr.push_back(make_pair(a,i));
            
        }
        
        sort(arr.begin(),arr.end());
        
        ll arr2[n+1];
        arr2[0] = arr[0].first;
        cumu[0] = arr[0].first;
        // for (int i = 0; i < n; i++)
        // {
        //     printf("%lld ",arr[i].first);
        // }
        
        for (int i = 1; i < n; i++)
        {
            cumu[i] = arr[i].first+cumu[i-1];
            arr2[i] = arr[i].first;
        }
        arr.push_back(make_pair(10000000000000000009,n));
        arr2[n] =  arr[n].first;
        // printf("%lld\n",arr[1].first);
        int c1 = (w+1)/2;
        int ans = 0;
        int idx = lower_bound(arr2,arr2+n+1,c1) - arr2;
        // printf("%d\n",idx);
        // printf("%lld\n",arr2[0]);
        if(arr2[idx] <= w && idx != n){
            // printf("%d\n",idx);
            printf("1\n");
            printf("%lld\n",arr[idx].second+1);
        }
        else
        {
            bool yes = false;
            for (int i = 0; i < n; i++)
            {
                if(cumu[i] <= w && cumu[i] >= c1){
                    printf("%d\n",i+1);
                    for (int j = 0; j <= i; j++)
                    {
                        printf("%lld ",arr[j].second+1);
                    }
                    printf("\n");
                    yes = true;
                    break;
                }
            }
            if(!yes){
                printf("-1\n");
            }
            
        }
        
    }
    
}