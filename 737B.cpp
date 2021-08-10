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
        pair<int,int> arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i].first);
            arr[i].second = i;
        }
        sort(arr,arr+n);
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            arr2[arr[i].second] = i;
        }
        int partitions = 1;
        for (int i = 1; i < n;)
        {
            while (i < n && arr2[i]-arr2[i-1]==1)
            {
                i++;
            }
            if(i < n){
                partitions++;
            }
            i++;
        }
        if(partitions <= k){
            printf("YES\n");
        }
        else printf("NO\n");
    }
    
}