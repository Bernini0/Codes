#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, l, r;
        scanf("%d %d %d", &n, &l, &r);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr,arr+n);
        long long int cnt = 0;
        for (int i = 0; i < n-1; i++)
        {
            int idx1 = lower_bound(arr+i+1,arr+n,l-arr[i])-arr;
            int idx2 = upper_bound(arr+i+1,arr+n,r-arr[i])-arr;
            // printf("%d %d\n",idx1,idx2);
            if(idx1 == n)continue;
            idx2 = n-idx2;
            cnt += (long long int)n - (long long int)idx1 - (long long int)idx2;
        }
        printf("%lld\n",cnt);
    }
    
}