#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     if(n==1){
//         printf("4\n");
//     }
//     else if(n%2==1){
//         int a = (n+3)/2;
//         int b = (n/2)+1;
//         int ans = 2*a*b;
//         printf("%d\n",ans);
//     }
//     else
//     {
//         int ans = n+1-(n/2);
//         ans *= ans;
//         printf("%d\n",ans);
//     }
// }
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    ll arr[n], arr2[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    sort(arr, arr + n);
    ll k = arr[0];
    ll ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ans = __gcd(ans, arr[i + 1] - arr[i]);
    }
    // printf("%lld\n", ans);
    for (int i = 0; i < m; i++)
    {
        scanf("%lld", &arr2[i]);
    }
    for (int i = 0; i < m; i++)
    {
        printf("%lld ", __gcd(arr2[i]+k,ans));
    }
    printf("\n");
}