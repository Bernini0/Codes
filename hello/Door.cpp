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
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int ans = 0;
        int l = 0;
        int j = 0;

        int cnt = 0;
        int i = 0,p =0;
        while (i < n-k+1)
        {
            if(arr[j]< arr[j+1] && arr[j+1]>arr[j+2]){
                cnt++;
            }
            j++;

            if(j-i==k-2){

                if(ans < cnt){
                    ans = cnt;
                    l = i;
                }
                i++;
                cnt = 0;
                j = i;                
            }
        }
        
        printf("%d %d\n", ans + 1, l+1);
    }
}