#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr,arr+m);
    vector<int>ans;
    for (int i = 0; i <= m-n; i++)
    {
        // printf("%d\n",arr[i+n-1]-arr[i]);
        ans.push_back(arr[i+n-1]-arr[i]);
    }
    sort(ans.begin(),ans.end());
    printf("%d\n",ans[0]);
}