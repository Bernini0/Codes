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
        int arr[n+1];
        int cnt[2*n+1];
        memset(cnt,0,sizeof(cnt));
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &arr[i]);
            cnt[arr[i]] = i;
        }
        int cnt2 = 0;
        for (int i = 1; i < n; i++)
        {
            int p = i+n+arr[i]-1;
            p/= arr[i];
            // printf("%d %d %d %d\n",p,arr[i],cnt[1], i);
            for (int j = 1; j <= p; j++)
            {
                if(j==arr[i])continue;
                if(cnt[j] > 0 && ((j*arr[i]) == (cnt[j]+i)) && cnt[j] > i){
                    cnt2++;
                }
            }
            
        }
        printf("%d\n",cnt2);
    }
    
}