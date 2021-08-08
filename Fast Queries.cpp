//Number of Distinct integers in a segment
//Time Complexity - O(q*log^2(N))
//Sub problem - Number of integers > k in a segment
#include <bits/stdc++.h>
using namespace std;
int arr[100000];
vector<vector<int>>t(4*100000+1);
void build(int v, int tl, int tr)
{
    if(tl==tr)
    {
        t[v].push_back(arr[tl]);
    }
    else
    {
        int tm = (tl+tr)/2;
        build(2*v,tl,tm);
        build(2*v+1,tm+1,tr);
        merge(t[2*v].begin(),t[2*v].end(),t[2*v+1].begin(),t[2*v+1].end(),std::inserter(t[v],t[v].begin()));
    }
}
int query(int v,int tl, int tr, int l, int r)
{
    if(l > tr || r < tl){
        return 0;
    }
    if(tl >= l && tr <= r)
    {   
        int idx = upper_bound(t[v].begin(),t[v].end(),r)-t[v].begin();
        return t[v].size()-idx;
    }
    else
    {
        int tm = (tl+tr)/2;
        int s1 = query(2*v,tl,tm,l,r);
        int s2 = query(2*v+1,tm+1,tr,l,r);
        return s1+s2;
    }
    
}
int main()
{
    int T;
    scanf("%d", &T);
    for(int tc = 1; tc <= T; tc++)
    {
        for (int i = 0; i <= 4*100000; i++)
        {
            t[i].clear();
        }
        
        int n, q;
        scanf("%d %d", &n, &q);
        int arr1[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr1[i]);
        }
        int cnt[100000+1];
        memset(cnt,-1,sizeof(cnt));
        for (int i = n-1; i >= 0; i--)
        {
            if(cnt[arr1[i]]==-1){
                cnt[arr1[i]] = i;
                arr[i] = 2000000000;
            }
            else
            {
                arr[i] = cnt[arr1[i]];
                cnt[arr1[i]] = i;
            }
            
        }
        // for (int i = 0; i < n; i++)
        // {
        //     printf("%d---> %d\n",arr1[i],arr[i]);
        // }
        
        build(1,0,n-1);
        printf("Case %d:\n",tc);
        while (q--)
        {
            int l, r;
            scanf("%d %d", &l, &r);
            int s = query(1,0,n-1,l-1,r-1);
            printf("%d\n",s);
        }
        
        
    }
}