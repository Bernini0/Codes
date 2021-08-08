#include <bits/stdc++.h>
using namespace std;
int arr[100000+1];
int t[4*100000+1];
void build(int v, int tl, int tr)
{
    if(tl==tr){
        t[v] = arr[tl];
    }
    else
    {
        int tm = (tl + tr)/2;
        build(2*v,tl,tm);
        build(2*v+1,tm+1,tr);
        t[v] = min(t[2*v],t[2*v+1]);
    }
}
int query(int v, int tl, int tr, int l, int r)
{
    if(tl > r || tr < l)return 20000000;
    if(tl >= l && tr <= r){
        return t[v];
    }
    else
    {
        int tm = (tl+tr)/2;
        return min(query(2*v,tl,tm,l,r),query(2*v+1,tm+1,tr,l,r));
    }
}
int main()
{
    int T;
    scanf("%d", &T);
    for(int tc = 1; tc <= T; tc++)
    {
        int n, q;
        scanf("%d %d", &n, &q);
        for(int i = 0; i< n; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("Case %d:\n",tc);
        build(1,0,n-1);
        while(q--)
        {
            int a, b;
            scanf("%d %d", &a, &b);
            int ans = query(1,0,n-1,a-1,b-1);
            printf("%d\n",ans);
        }
    }
}