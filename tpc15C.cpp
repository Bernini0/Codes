#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    scanf("%d", &n);
    ll arr[n],arr2[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
        sum+= arr[i];
        arr2[i] = arr[i];
    }
    sum/=n;
    ll average = sum;
    ll ans1 = 0, ans2 = 0;
    // vector<int>v;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i] > average){
            ans1+= arr[i]-average;
            arr[i+1] += arr[i]-average;
        }
        else if(arr[i] < average){
            ans1+= (average-arr[i])*(i+1);
        }
    }
    for (int i = n-1; i > 0; i--)
    {
        if(arr2[i] > average){
            ans2+= arr2[i]-average;
            arr2[i-1] += arr2[i]-average;
        }
        else if(arr2[i] < average){
            ans2+= (average-arr2[i])*(n-i);
        }
        // printf("%d %d\n",i,ans2);
    }
    printf("%lld\n",min(ans1,ans2));
}