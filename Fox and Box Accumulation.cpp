#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ans = 0, korsi = 0;
    int k = -1;
    sort(arr,arr+n);
    bool vis[n];
    memset(vis,false,sizeof(vis));
    while (korsi < n)
    {
        ans++;
        k = -1;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] > k && !vis[i]){
                k++;
                korsi++;
                vis[i] = true;
            }
        }
        
    }
    printf("%d\n",ans);
    
}