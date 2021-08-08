#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n],arr2[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    bool vis[100000+1];
    memset(vis,false,sizeof(vis));
    int a = 0;
    int j = 0;
    int ans = 0;
    while (a < n)
    {
        if(vis[arr1[a]]==true)a++;
        else if(arr2[j]==arr1[a]){
            vis[arr2[j]] = true;
            a++;
            j++;
        }
        else{
            vis[arr2[j]] = true;
            ans++;
            j++;
        }
        // printf("%d,%d--> %d\n",a,j,ans);
    }
    printf("%d\n",ans);
}