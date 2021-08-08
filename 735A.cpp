#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        long long int maxi = -1;
        for (int i = 1; i < n; i++)
        {
            long long int d = arr[i-1]*arr[i];
            if(d > maxi){
                maxi = d;
            }
        }
        printf("%lld\n",maxi);
    }
}