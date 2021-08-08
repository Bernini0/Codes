#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr,arr+n);
        int ans = arr[0]+arr[1];
        if(n > 2 && arr[2]> arr[1] && arr[0]!= 0){
            ans++;
        }
        if(arr[0]==0 && arr[1]==0){
            ans = 1;
        }
        printf("Case #%d: %d\n",tc,ans);
        
    }
}