#include <bits/stdc++.h>
using namespace std;
struct info
{
    long long int sum, prop;
    bool mark;
} t[4 * 100000 + 1];
void build(int v, int tl, int tr)
{
    if (tl == tr)
    {
        t[v].sum = 0;
        t[v].prop = -1;
        t[v].mark = false;
    }
    else
    {
        int tm = (tl + tr) / 2;
        build(2 * v, tl, tm);
        build(2 * v + 1, tm + 1, tr);
        t[v].sum = 0;
        t[v].prop = -1;
        t[v].mark = false;
    }
}
void push(int v)
{
    if (t[v].mark) {
        t[v*2].prop = t[v*2+1].prop = t[v].prop;
        t[v*2].mark = t[v*2+1].mark = true;
        t[v].mark = false;
        t[v].prop = -1;
    }
}
void propagate(int v,long long int tl, long long int tr)
{
    t[2*v].prop = t[2*v+1].prop = t[v].prop;
    int tm = (tl+tr)/2;
    t[2*v].sum = (tm-tl+1)*t[2*v].prop;
    t[2*v+1].sum = (tr-tm)*t[v].prop;
    t[v].prop = -1;
}
void update(int v,int tl, int tr, int l, int r, long long int x)
{
    if(tl > r || tr < l)return;
    if(tl >= l && tr <= r)
    {
        t[v].prop = x;
        t[v].sum = (tr-tl+1)*x;
        t[v].mark = true;
    }
    else
    {
        // push(v);
        if(t[v].prop!=-1){
        propagate(v,tl,tr);
        }
        int tm = (tl+tr)/2;
        update(2*v,tl,tm,l,r,x);
        update(2*v+1,tm+1,tr,l,r,x);
        t[v].sum = t[2*v].sum+t[2*v+1].sum;
        // printf("%d\n",v);
    }
    
}
long long int sum(int v, long long int tl, long long int tr, long long int l, long long int r)
{
    if (l > tr || r < tl)
        return 0;
    if (tl >= l && tr <= r)
    {
        return t[v].sum;
         
    }
    else
    {
        if(t[v].prop!=-1){
            propagate(v,tl,tr);
        }
        long long int tm = (tl + tr) / 2;
        long long int k1 = sum(2 * v, tl, tm, l, r);
        long long int k2 = sum(2 * v + 1, tm + 1, tr, l, r);
        // printf("k-->%lld v-->%d\n", k1, k2);
        return k1 + k2;
    }
}
int main()
{
    int T;
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++)
    {
        int n, q;
        scanf("%d %d", &n, &q);
        build(1, 0, n - 1);
        printf("Case %d:\n",tc);
        while (q--)
        {
            int type;
            scanf("%d", &type);
            if (type == 1)
            {
                int l, r, x;
                scanf("%d %d %d", &l, &r, &x);
                update(1, 0, n - 1, l, r, x);
            }
            else
            {
                long long int l, r;
                scanf("%lld %lld", &l, &r);
                long long int ans = sum(1, 0, n - 1, l, r);
                if(ans % (r-l+1)!=0){
                    long long int i = __gcd(ans,r-l+1);
                    printf("%lld/",ans/i);
                    printf("%lld\n",(r-l+1)/i);
                }
                else{
                printf("%lld\n", ans/(r-l+1));
                }
            }
        }
    }
}