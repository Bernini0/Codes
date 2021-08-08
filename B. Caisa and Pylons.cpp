#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ans1 = 0,ans = 0;
    for (int i = 0; i <n-1; i++)
    {
        ans1 += (arr[i]-arr[i+1]);
        if(ans1 < 0){
            ans+= abs(ans1);
            ans1 = 0;
        }
    }
    ans += arr[0];
    printf("%d\n",ans);
}