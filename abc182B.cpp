#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int cnt[1001];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    memset(cnt,0,sizeof(cnt));
    for (int i = 2; i < 1001; i++)
    {
        for(int j = 0; j < n; j++){
            if(arr[j]%i==0){
                cnt[i]++;
            }
        }
    }
    int ans = -1;
    int k = -1;
    for (int i = 0; i < 1001; i++)
    {
        if(cnt[i] > ans){
            ans = cnt[i];
            k = i;
        }
    }
    printf("%d\n",k);
}