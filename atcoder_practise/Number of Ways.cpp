#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n];
    long long int arr2[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
        sum += arr1[i];
        arr2[i] = sum;
    }
    if(sum%3!=0 || n < 3){
        printf("0\n");
        return 0;
    }
    long long int avg = sum/3;
    if(avg == 0){
        long long int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr2[i]==0){
                cnt++;
            }
        }
        if(cnt<3){
            printf("0\n");
        }
        else{
            printf("%lld\n",(cnt-1)*(cnt-2)/2);
        }
        return 0;
    }
    bool one = false, two = false, three = false;
    long long int cnt1 = 0, cnt2 = 0, cnt3 = 0,cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr2[i]==avg){
            one = true;
            cnt1++;
            if(two){
                cnt += cnt2;
            }
        }
        else if(arr2[i]==(2*avg) && one){
            two = true;
            cnt2++;
        }
    }
    printf("%lld\n",cnt1*cnt2-cnt);
}