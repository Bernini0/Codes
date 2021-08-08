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
        // sort(arr,arr+n);
        int l = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] > 0){
                l++;
                if(l >= k)cnt++;
            }
            else
            {
                l = 0;
            }
            
        }
        printf("%d\n",cnt);
    }
    
}