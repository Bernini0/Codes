#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        vector<ll>arr(n);
        vector<ll>arr2(n);
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        ll cnt = 0,count = 0, ans = 0;
        int k = 0,r = 0, l = 0;
        arr2 = arr;
        for (int i = 0; i < n-1; i++)
        {
            if(arr[i] == arr[i+1]){
                count++;
            }
            else{
                if(k==0){
                k = i+1;
                r++;
                }
                if(r==1){
                    l = i+1;
                }
            }
        }
        if(count==n-1 || count == n-2){
            printf("0\n");
            continue;
        }
        if(arr[0]==arr[0+1]){
            arr[k] = arr[0];
            for (int i = k+1; i < n; i++)
            {
                arr[i] += ans;
                if(arr[i] <= arr[0]){
                    cnt += abs(arr[0]-arr[i]);
                    ans += arr[0]-arr[i];
                }
                else{
                    cnt+=abs(arr[0]-arr[i]);
                    ans += arr[0]-arr[i];
                }
            }
            
        }
        else
        {
            arr[0] = arr[1];
            k = 1;
            for (int i = k+1; i < n; i++)
            {
                arr[i] += ans;
                if(arr[i] <= arr[0]){
                    cnt += abs(arr[0]-arr[i]);
                    ans += arr[0]-arr[i];
                }
                else{
                    cnt+=abs(arr[0]-arr[i]);
                    ans += arr[0]-arr[i];
                }
            }
            arr2[1] = arr[0];
            k = 1;
            ll ans2 = 0, cnt2 = 0;
            for (int i = k+1; i < n; i++)
            {
                arr2[i] += ans2;
                if(arr2[i] <= arr2[0]){
                    cnt2 += abs(arr2[0]-arr2[i]);
                    ans2 += arr2[0]-arr2[i];
                }
                else{
                    cnt2+=abs(arr2[0]-arr2[i]);
                    ans2 += arr2[0]-arr2[i];
                }
            }
            cnt = min(cnt,cnt2);
        }
        printf("%lld\n",cnt);
    }
    
}