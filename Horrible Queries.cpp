#include <bits/stdc++.h>
using namespace std;
struct info
{
    long long int sum,prop;
}t[4*100000+1];
#define ll long long int
void build(int v, int tl, int tr)
{
    if(tl==tr){
        t[v].sum = 0;
        t[v].prop = 0;
    }
    else
    {
        int tm = (tl+tr)/2;
        build(2*v,tl,tm);
        build(2*v+1,tm+1,tr);
        t[v].sum = t[2*v].sum+t[2*v+1].sum;
        t[v].prop = 0;
    }
    
}
void update(int v, int tl, int tr, int l, int r, long long int x)
{
    if(tr < l || tl > r)return;
    if(tl >=l && tr <= r){
        t[v].prop += x;
        t[v].sum += (tr-tl+1)*x;
    }
    else
    {
        int tm = (tl+tr)/2;
        update(2*v,tl, tm,l,r,x);
        update(2*v+1,tm+1,tr,l,r,x);
        t[v].sum = t[2*v].sum+t[2*v+1].sum+(ll)(tr-tl+1)*t[v].prop;
    }
    
}
long long sum(int v, int tl, int tr, int l, int r, long long int carry = 0)
{
    if(tl > r || tr < l)return 0;
    if(tl >= l && tr <= r){
        return t[v].sum+carry*(ll)(tr-tl+1);
    }
    else
    {
        int tm = (tl+tr)/2;
        return sum(2*v,tl,tm,l,r,carry+t[v].prop)+sum(2*v+1,tm+1,tr,l,r,carry+t[v].prop);

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
        // printf("asjhfsdf\n");
        build(1,0,n-1);
        printf("Case %d:\n",tc);
        while (q--)
        {
            int a;
            scanf("%d", &a);
            if(a==0){
                int l, r;long long int x;
                scanf("%d %d %lld", &l, &r, &x);
                update(1,0,n-1,l,r,x);
            }
            else
            {
                int l, r;
                scanf("%d %d", &l, &r);
                long long int ans = sum(1,0,n-1,l,r);
                printf("%lld\n",ans);
            }
            
        }
        
    }
    
}