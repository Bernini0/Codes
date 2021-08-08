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
        int arr[2][n];
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < 2; i++)
        {
            for(int j = 0; j < n; j++){
                scanf("%d", &arr[i][j]);
                if(j==0){
                    continue;
                }
                else arr[i][j]+= arr[i][j-1];
            }
        }
        int ans = 2000000000;
        int d;
        ans = min(ans,arr[0][n-1]-arr[0][0]);
        for (int i = 1; i < n; i++)
        {
            int a = min(ans,max(arr[0][n-1]-arr[0][i],arr[1][i-1]));
            if(a < ans){
                ans = a;
                d = i;
            }
        }
        printf("%d\n",ans);
    }
    
}