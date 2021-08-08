#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        long long int arr[n];
        memset(arr, 0, sizeof(arr));
        double per[n - 1];
        // int a;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
            arr[i] += a[i];
            // printf("a-->%lld\n",a[i]);
            // if(i > 0){
            //     arr[i] += arr[i-1];
            // }
        }
        long long int sum = a[0];
        long long int ans = 0;
        // printf("%.10lf\n", (1.0 * 1) / (20100 * 1.0));
        for (int i = 1; i < n; i++)
        {
            
            // printf("%lld %lld\n", a[i], arr[i - 1]);
            per[i - 1] = (1.0 * a[i]*100) / (sum * 1.0);
            // printf("%lf\n", per[i - 1]);
            if (per[i - 1] - (1.0 * k) >= 1e-8)
            {
                double d = ((1.0 * a[i] * 100) - (1.0 * sum * k)) / (1.0 * k);
                // printf("%.10lf\n", d);
                if (d - (int)d >= 1e-6)
                {
                    d++;
                }
                ans += (int)d;
                // /arr[i] += (int)d;
                sum+= (int)d;
            }
            sum+= a[i];
        }
        printf("%lld\n", ans);
    }
}