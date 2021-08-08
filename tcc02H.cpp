#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr,arr+n);
        int arr2[m];
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &arr2[i]);
        }
        sort(arr2,arr2+m);
        int j = 0;
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            while (arr2[i] > 0)
            {
                if(arr2[i]==1){
                    ans+= arr[j];
                    j++;
                }
                else
                {
                    j++;
                    ans += 20;
                }
                arr2[i]--;
            }
            
        }
        
        printf("Case %d: %d\n",tc,ans);
    }
}