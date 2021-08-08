#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        int n, d, c;
        scanf("%d %d %d", &n, &d, &c);
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        sort(arr,arr+n);
        long long int ans = n*d;
        for (int i = 0; i < n; i++)
        {
            long long int a = arr[i]*(i+1)*c;
            a += ((n-i-1)*d);
            if(ans > a){
                ans = a;
            }
        }
        printf("Case %d: %lld\n",tc,ans);

    }
    
}