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
        int arr1[2*n];
        int arr2[n];
        int arr[n+1];
        memset(arr,0,sizeof(arr));
        vector<pair<int,int>>ans;
        int m = 0;
        for (int i = 0; i < 2*n; i++)
        {
            scanf("%d", &arr1[i]);
            if(arr[arr1[i]]==0){
                arr[arr1[i]] = 1;
                ans.push_back(make_pair(m,arr1[i]));
                m++;
            }

        }
        sort(ans.begin(),ans.end());
        for (int i = 0; i <ans.size()-1; i++)
        {
            printf("%d ",ans[i].second);
        }
        printf("%d\n",ans[ans.size()-1].second);
        
    }
    
}