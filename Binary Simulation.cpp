#include <bits/stdc++.h>
using namespace std;
struct info
{
    int propagation, sum;
}t[100000*4+1];
int arr[100000];
void build(int v, int tl, int tr)
{
    if(tl==tr){
        t[v].sum = arr[tl];
        t[v].propagation = 0;
    }
    else
    {
        int tm = (tl+tr)/2;
        build(2*v,tl,tm);
        build(2*v+1,tm+1,tr);
        t[v].sum = t[2*v].sum+t[2*v+1].sum;
        t[v].propagation = t[2*v].propagation+t[2*v+1].propagation;
    }
    
}
void update(int v, int tl, int tr, int l, int r, int x)
{
    if(tl > r || tr < l)return;
    if(tl >= l && tr <= r){
        t[v].propagation += x;
        t[v].sum += (x*(tr-tl+1));
    }
    else
    {
        int tm = (tl+tr)/2;
        update(2*v,tl,tm,l,min(r,tm),x);
        update(2*v+1,tm+1,tr,max(l,tm+1),r,x);
        t[v].sum = t[2*v].sum+t[2*v+1].sum+(tr-tl+1)*t[v].propagation;
    }
    
}
int query(int v, int tl, int tr, int pos, int carry = 0){
    if(tl > pos || tr < pos)return 0;
    if(tl>=pos && tr <= pos){
        return t[v].sum+ carry*(tr-tl+1);
    }
    else
    {
        int tm = (tl+tr)/2;
        return query(2*v,tl,tm,pos,carry+t[v].propagation)+query(2*v+1,tm+1,tr,pos,carry+t[v].propagation);

    }
    
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        // int n;
        // scanf("%d", &n);
        // getchar();
        char c[100000+7];
        // int arr[n];
        scanf("%s",c);
        int n = strlen(c);
        for (int i = 0; i < n; i++)
        {
            // scanf("%c", &c);
            arr[i] = c[i]-48;
        }
        build(1,0,n-1);
        int q;
        scanf("%d", &q);
        printf("Case %d:\n",tc);
        while (q--)
        {
            getchar();
            char a;
            scanf("%c", &a);
            // printf("%c\n",a);
            if(a=='I'){
                int b, c;
                scanf("%d %d", &b, &c);
                if(c<b)swap(b,c);
                update(1,0,n-1,b-1,c-1,1);
            }
            else if(a=='Q'){
                int b;
                scanf("%d", &b);
                int ans = query(1,0,n-1,b-1);
                if(ans%2){
                    printf("1\n");
                }
                else
                {
                    printf("0\n");
                }
                
            }
            // getchar();
        }
        
        
    }
}