#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    long long int sum = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum+= arr[i];
    }
    sum = sum/n;
    long long int ans1= 0;
    for (int i = 0; i < n; i++)
    {
        ans1 += (arr[i]-sum)*(arr[i]-sum);
    }
    sum++;
    long long int ans2 = 0;
    for (int i = 0; i < n; i++)
    {
        ans2+= (arr[i]-sum)*(arr[i]-sum);
    }
    printf("%lld\n",min(ans1,ans2));
}