#include <bits/stdc++.h>
using namespace std;
struct info
{
    int zero_reminder,one_reminder,two_reminder,lala;
}t[4*100000+1];
int arr[100000+1];
void build(int v, int tl,int tr)
{
    if(tl==tr){
        t[v].zero_reminder = 1;
        t[v].one_reminder = 0;
        t[v].two_reminder = 0;
        t[v].lala = 0;
    }
    else
    {
        int tm = (tl+tr)/2;
        build(2*v,tl,tm);
        build(2*v+1,tm+1,tr);
        t[v].zero_reminder = t[2*v].zero_reminder+t[2*v+1].zero_reminder;
        t[v].one_reminder = 0;
        t[v].two_reminder = 0;
        t[v].lala = 0;
    }
    
}
void toggle(int v, int x){
    while (x--)
    {
        swap(t[v].zero_reminder,t[v].one_reminder);
        swap(t[v].zero_reminder,t[v].two_reminder);
    }
    
}
void propagate(int v, int l, int r)
{
    t[2*v].lala+=t[v].lala;
    t[2*v+1].lala += t[v].lala;
    t[2*v].lala%=3;
    t[2*v+1].lala%=3;
    // t[v].lala = 0;
    toggle(2*v,t[v].lala);
    toggle(2*v+1,t[v].lala);
    t[v].lala = 0;
}
void update(int v, int tl, int tr, int l, int r)
{
    if(tl > r || tr < l)return;
    if(tl >= l && tr <= r){
        t[v].lala++;
        if(t[v].lala == 3){
            t[v].lala = 0;
        }
        swap(t[v].zero_reminder,t[v].one_reminder);
        swap(t[v].zero_reminder,t[v].two_reminder);
    }
    else
    {
        if(t[v].lala){
            propagate(v,tl,tr);
        }
        int tm = (tl+tr)/2;
        update(2*v,tl,tm,l,r);
        update(2*v+1,tm+1,tr,l,r);
        t[v].zero_reminder = t[2*v].zero_reminder+t[2*v+1].zero_reminder;
        t[v].one_reminder = t[2*v].one_reminder+t[2*v+1].one_reminder;
        t[v].two_reminder = t[2*v].two_reminder+t[2*v+1].two_reminder;
        // printf("%d--->%d\n",v,t[v].zero_reminder);
    }
    
}
int query(int v, int tl, int tr, int l, int r)
{
    if(tl > r || tr < l)return 0;
    if(tl >= l && tr <= r){
        return t[v].zero_reminder;
    }
    else
    {
        if(t[v].lala)propagate(v,tl,tr);
        int tm = (tl+tr)/2;
        return query(2*v,tl,tm,l,r)+query(2*v+1,tm+1,tr,l,r);
    }
    
}
int main()
{
    int T;
    scanf("%d", &T);
    for(int tc = 1; tc <= T;tc++)
    {
        int n, q;
        scanf("%d %d", &n, &q);
        // memset(arr,0,sizeof(arr));
        // memset(t,0,sizeof(t));
        build(1,0,n-1);
        // for (int i = 0; i < 100; i++)
        // {
        //     printf("%d----> %d\n",i,t[i].two_reminder);
        // }
        printf("Case %d:\n",tc);
        while (q--)
        {
            int a;
            scanf("%d", &a);
            if(a==0){
                int b, c;
                scanf("%d %d", &b, &c);
                update(1,0,n-1,b,c);
                // for (int i = 0; i <= 4*10; i++)
                // {
                //     printf("%d--->%d\n",i,t[i].zero_reminder);
                // }
                
            }
            else
            {
                int b, c;
                scanf("%d %d", &b, &c);
                int ans = query(1,0,n-1,b,c);
                printf("%d\n",ans);
            }
            
        }
        
    }
}