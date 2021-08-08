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
        int arr[n];
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] % 3 == 0)
                cnt0++;
            else if (arr[i] % 3 == 1)
                cnt1++;
            else
                cnt2++;
        }
        if (cnt1 == cnt0 && cnt1 == cnt2)
        {
            printf("0\n");
            continue;
        }
        // printf("%d %d %d\n",cnt0,cnt1,cnt2);
        long long int ans = 0ll;
        while (cnt0 < (n / 3) && cnt2 > (n / 3))
        {

            ans++;
            cnt2--;
            cnt0++;
        }
        while (cnt0 < (n/3) && cnt1 > (n/3))
        {
            ans+=2;
            cnt1--;
            cnt0++;
            // printf("a");
        }
        while (cnt1 < (n / 3) && cnt0 > (n / 3))
        {

            ans+=1;
            cnt0--;
            cnt1++;
        }
        while (cnt1 < (n/3) && cnt2 > (n/3))
        {
            ans+=2;
            cnt2--;
            cnt1++;
        }
        while (cnt2 < (n / 3) && cnt1 > (n / 3))
        {

            ans++;
            cnt1--;
            cnt2++;
            // printf("b");
        }
        while (cnt2 < (n/3) && cnt0 > (n/3))
        {
            ans+=2;
            cnt0--;
            cnt2++;
        }
        printf("%d\n",ans);
    }
}