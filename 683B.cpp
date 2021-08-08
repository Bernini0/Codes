#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        int arr[n][m];
        int arr2[n*m];
        int k = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                scanf("%d", &arr[i][j]);
                arr2[k] = abs(arr[i][j]);
                if(arr[i][j] < 0){
                    cnt++;
                }
                k++;
            }
        }
        if(cnt%2==0){
            int ans = 0;
            for (int i = 0; i < (n*m); i++)
            {
                ans += arr2[i];
            }
            printf("%d\n",ans);
        }
        else
        {
            int ans = 0;
            sort(arr2,arr2+(n*m));
            for (int i = 1; i < n*m; i++)
            {
                ans += arr2[i];
            }
            printf("%d\n",ans-arr2[0]);
        }
        
    }
    
}