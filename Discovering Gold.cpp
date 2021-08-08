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
        double arr2[n];
        for (int i = 0; i < n; i++)
        {
            arr2[i] = 0.0;
        }
        arr2[0] = 1.0;
        for (int i = 0; i < n; i++)
        {
            int k = min(6,n-1-i);
            for (int j = i+1; j-i <= k ; j++)
            {
                arr2[j] += (arr2[i])/k;
            }
        }
        if(n==1){
            printf("Case %d: %lf\n",tc, (double)arr[0]);
            continue;
        }
        double ans = (double)(arr[0]+arr[n-1]);
        for (int i = 1; i < n-1; i++)
        {
            ans += arr2[i]*((double)arr[i]);
        }
        printf("Case %d: %lf\n",tc,ans);
    }
}