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
        int sum = 0;
        // int cnt[201];
        // memset(cnt,0,sizeof(cnt));
        int one = 0;
        int two = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            sum+= arr[i];
            if(arr[i]==1)one++;
            else two++;
            // sum+= arr[i];
            // cnt[sum] = 1;
        }
        n = sum;
        n = n/2;
        if(sum%2==1){
            printf("NO\n");
        }
        else if(n%2==0 && n/2 <= two){
            printf("YES\n");
        }
        else if(n/2 <= two && one>=1){
            printf("YES\n");
        }
        else if(n/2 > two && n- (two*2) <= one){
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    }
    
}