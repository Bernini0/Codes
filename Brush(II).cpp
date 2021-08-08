#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        int n, w;
        scanf("%d %d", &n, &w);
        vector<int>arr(n);
        int a;
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &a, &arr[i]);
        }
        sort(arr.begin(),arr.end());
        arr.erase(unique(arr.begin(),arr.end()),arr.end());
        // printf("%d\n",arr.size());
        int p = -2000000000-1;
        int cnt = 0;
        for (int i = 0; i <arr.size(); i++)
        {
            if(p < arr[i]){
                cnt++;
                p = w+arr[i];
            }
        }
        printf("Case %d: %d\n",tc,cnt);
    }
}