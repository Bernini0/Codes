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
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr.begin(),arr.end());
        long long int ans = arr.size();
        ans *= (ans-1);
        // arr.erase(unique(arr.begin(),arr.end()),arr.end());
        for (int i = 1; i < n;)
        {
            long long int cnt = 1;
            while (i < n && arr[i]==arr[i-1])
            {
                cnt++;
                i++;
            }
            ans -= (cnt*(cnt-1));
            i++;
        }
        
        // long long int a = (long long int)arr.size();
        printf("%lld\n",ans);
    }
    
}