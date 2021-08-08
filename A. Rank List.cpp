#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int p,t;
    vector<pair<int,int>>v;
    // vector<int>v2(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &p, &t);
        v.push_back({p,t});
    }
    // printf("%d\n",v.size());
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    // for (int i = 0; i < v.size(); i++)
    // {
    //     printf("%d %d\n",v[i].first,v[i].second);
    // }
    
    int l = 0;
    int arr[51];
    memset(arr,0,sizeof(arr));
    while (l < n)
    {
        int cnt = 1;
        int r = l+1;
        vector<int>v3;
        v3.push_back(v[l].second);
        while (l < n && v[l].first == v[l+1].first )
        {
            v3.push_back(v[l+1].second);
            l++;
        }
        // for (int i = 0; i < v3.size(); i++)
        // {
        //     printf("%d ",v3[i]);
        // }
        // printf("\n");
        sort(v3.begin(),v3.end());
        for (int i = 0; i < v3.size(); i++)
        {
            if(i+1< v3.size() && v3[i]==v3[i+1]){
                cnt++;
            }
            else
            {
                // printf("-----%d\n",cnt);
                for (int j = 0; j < cnt; j++)
                {
                    arr[r] = cnt;
                    if(r==5){

                    }
                    r++;
                }
                cnt = 1;
            }
            
        }
        l++;
    }
    printf("%d\n",arr[k]);
    
}