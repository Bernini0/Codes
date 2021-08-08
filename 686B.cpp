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
        int arr[n+1];
        memset(arr,0,sizeof(arr));
        vector<pair<int,int>>v;
        int c;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &c);
            arr[c]++;
            v.push_back({c,i});
        }
        // sort(arr,arr+n);
        int d = -1;
        for (int i = 0; i <= n; i++)
        {
            if(arr[i]==1){
                d = i;
                break;
            }
        }
        if(d==-1){
            printf("%d\n",d);
            continue;
        }
        int ans;
        for (int i = 0; i < v.size(); i++)
        {
            if(v[i].first==d){
                ans = v[i].second;
            }
        }
        printf("%d\n",ans+1);
    }
    
}