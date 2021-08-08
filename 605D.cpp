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
    int ans = 0;
    for (int i = 1; i < n;)
    {
        int cnt = 1;
        // int start = i-1;
        while (i < n && arr[i - 1] < arr[i])
        {
            i++;
            cnt++;
        }
        // int end = i-1;
        ans = max(ans, cnt);
        i++;
    }
    // printf("%d\n",ans);
    // if(n==1000){
    //     printf("%d\n",ans);
    // }
    for (int i = 1; i < n; )
    {
        int cnt = 1;
        int one = 0;
        int k = -1;
        int a = arr[i-1];
        while (i < n && (a < arr[i] || one == 0))
        {
            if (a >= arr[i])
            {
                one++;
                k = i;
                a = arr[i-1];
                i++;
            }
            else
            {
                a = arr[i];
                i++;
                cnt++;
            }
        }
        ans = max(ans,cnt);
        if(k==-1){
            i++;
        }
        else{
            i = k+1;
        }
    }
    // if(n==1000){
    //     printf("%d\n",ans);
    // }
    for (int i = 1; i < n; )
    {
        int cnt = 1;
        int one = 0;
        int k = -1;
        int a = arr[i-1];
        while (i < n && (a < arr[i] || one == 0))
        {
            if ((a >= arr[i] && i -2 < 0) || (i-2>= 0 && arr[i-2] < arr[i] && a >= arr[i]))
            {
                one++;
                k = i;
                a = arr[i];
                i++;
            }
            else if(a < arr[i])
            {
                a = arr[i];
                i++;
                cnt++;
            }
            else break;
        }
        ans = max(ans,cnt);
        if(k==-1){
            i++;
        }
        else{
            i = k+1;
        }
    }
    printf("%d\n",ans);
}