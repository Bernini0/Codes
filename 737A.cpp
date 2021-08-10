#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        sort(arr,arr+n);
        long long int a = 0;
        for (int i = 0; i < n-1; i++)
        {
            a += arr[i];
        }
        double b = (double)a;
        b /= ((n-1)*1.0);
        b+= arr[n-1];
        printf("%.10lf\n",b);
    }
    
}