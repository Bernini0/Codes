#include <bits/stdc++.h>
using namespace std;
int arr[2000];
bitset<200002>dp;
int n;
int main()
{
    // int n;
    scanf("%d", &n);
    // int arr[n];
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        s += arr[i];
    }
    if (s & 1)
    {
        printf("0\n");
        return 0;
    }
    dp.set(0);
    for (int i = 0; i < n; i++)
    {
        dp |= (dp << arr[i]);
    }
    if(dp[s/2]){
        while (1)
        {
            for (int i = 0; i < n; i++)
            {
                if(arr[i]&1){
                    printf("1\n%d\n",i+1);
                    return 0;
                }
                else
                {
                    arr[i]/=2;
                }
                
            }
            
        }
        
    }
    else
    {
        printf("0\n");
        return 0;
    }
    
}