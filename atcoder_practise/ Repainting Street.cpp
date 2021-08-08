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
        int arr[n];
        int cnt[101];
        memset(cnt, 0, sizeof(cnt));
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            cnt[arr[i]]++;
        }
        int ans = 10000000;
        for (int i = 1; i < 101; i++)
        {
            
            if (cnt[i] == 0)
                continue;
                
            else
            {
                int cnt = 0;
                for (int j = 0; j < n;)
                {
                    if(arr[j] != i){
                        cnt++;
                        j = j+k;
                    }
                    else{
                        j++;
                    }
                   
                }
                 ans = min(ans,cnt);
            }
        }
        printf("%d\n",ans);
    }
}