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
    sort(arr,arr+n);
    int a, b = INT_MIN, c = INT_MIN;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    if(n==1){
        printf("-1\n");
        return 0;
    }
    a = arr[1]-arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i]-arr[i-1]==a){
            cnt1++;
        }
        else if(b==INT_MIN || arr[i]-arr[i-1]==b)
        {
            b = arr[i]-arr[i-1];
            cnt2++;
        }
        else{
            c = arr[i]-arr[i-1];
        }
        if(c!= INT_MIN && b != INT_MIN){
            printf("0\n");
            return 0;
        }
    }
    // printf("%d\n",a);
    if(cnt2 > cnt1){
        swap(cnt2,cnt1);
        swap(a,b);
    }
    if(cnt2==cnt1){
        if(a > b){
            swap(a,b);
        }
    }
    if(a==0){
        if(b==INT_MIN){
            printf("1\n%d\n",arr[0]);
            return 0;
        }
        printf("0\n");
        return 0;
    }
    if(cnt1==n-1 && n==2 && a%2==0){
        printf("3\n");
        printf("%d %d %d\n",arr[0]-a,(arr[0]+arr[n-1])/2,arr[n-1]+a);
        return 0;
    }
    if(cnt1==n-1)
    {
        printf("2\n");
        printf("%d %d\n",arr[0]-a,arr[n-1]+a);
        return 0;
    }
    // printf("%d\n",b);
    if(cnt1==n-2 && b==2*a)
    {
        printf("1\n");
        for (int i = 1; i < n; i++)
        {
            if(arr[i]-arr[i-1]==b){
                printf("%d\n",(arr[i]+arr[i-1])/2);
                return 0;
            }
        }
    }
    else
    {
        printf("10\n");
    }

}