#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int arr[3];
    scanf("%lld %lld %lld", &arr[0], &arr[1], &arr[2]);
    sort(arr,arr+3);
    long long int r, g, b;
    r = arr[0];
    g = arr[1];
    b = arr[2];
    if(b >= 2*(r+g)){
        printf("%lld\n",r+g);
        return 0;
    }
    // printf("%d\n",r);
    long long int ans = r;
    b = b-r;
    g = g-r;
    ans += (b+g)/3;
    printf("%lld\n",ans);

}