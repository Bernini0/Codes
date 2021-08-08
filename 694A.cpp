#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n,x;
        scanf("%d %d", &n, &x);
        long long int arr[n];
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
            sum += arr[i];
        }
        long long int ans1 = 0,ans2 = (sum+x-1)/x;
        int cnt1 = 0;
        int cnt2 = 0, cnt3 = 0;
        for (int i = 0; i < n; i++)
        {
            ans1 += ((arr[i]+x-1)/x);
            // ans2 += (arr[i]/x);
        }
        printf("%lld %lld\n",ans2,ans1);
    }
    
}