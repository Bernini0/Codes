// #include <bits/stdc++.h>
// using namespace std;
// int n, t[100000 << 2];
// int arr[100000+1],arr1[100000+1],arr2[100000+1];
// void build(int tl, int tr,int v)
// {
//     if(tl==tr){
//         t[v] = arr[tl];
//     }
//     else
//     {
//         int tm = (tl+tr)/2;
//         build(tl,tm,2*v);
//         build(tm+1,tr,2*v+1);
//         t[v] = max(t[2*v],t[2*v+1]);
//     }
    
// }
// int getmax(int v,int tl, int tr, int l, int r)
// {
//     if(tl > r  || tr < l)return 0;
//     if(tl>=l && tr <= r)return t[v];
//     // if(l==r)return t[v];
//     // if(l==tl && r == tr){
//     //     return t[v];
//     // }
//     int tm = (tl+tr)/2;
//     int a = getmax(2*v,tl,tm,l,r);
//     int b = getmax(2*v+1,tm+1,tr,l,r);
//     // printf("%d\n",k);
//     return max(a,b);
// }
// int combine(int a, int b) {
//     if (a >= b) 
//         return a;
//     if (b > a)
//         return b;
// }
// void update(int v, int tl ,int tr ,int pos, int val)
// {
//     if(tl==tr){
//         t[v] = val;
//     }
//     else
//     {
//         int tm = (tl+tr)/2;
//         if(pos <= tm){
//             update(2*v,tl,tm,pos,val);
//         }
//         else
//         {
//             update(2*v+1,tm+1,tr,pos,val);
//         }
//         t[v] = combine(t[2*v],t[2*v+1]);
//     }
//     // printf("%d\n",t[v]);
    
// }
// int main()
// {
//     // int n;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d %d %d", &arr[i], &arr1[i], &arr2[i]);
//     }
//     // printf("skhfsaf\n");
//     memset(t,0,sizeof(t));
//     build(0,n-1,1);
//     // printf("asf\n");
//     vector<int>ans(n);
//     int p = -1;
//     for (int i = n-1; i >= 0; i--)
//     {
//         ans[i] = arr[i];
//         // printf("1-->%d\n",ans[i]);
//         if(i+arr1[i] > n-1){
//             p = max(ans[i],p);
//             update(1,0,n-1,i,ans[i]);
//             continue;
//         }
//         // printf("%d %d\n",i+arr1[i],t[i+arr1[i]]);
//         int k = getmax(1,0,n-1,i+arr1[i],min(i+arr2[i],n-1));
//         ans[i] += k;
//         update(1,0,n-1,i,ans[i]);
//         // printf("%d\n",t[1]);
//         // printf("k-->%d\n",k);
//         // printf("2-->%d\n",ans[i]);
//     }
//     // printf("%d\n",t[1]);
//     sort(ans.begin(),ans.end());
//     printf("%d\n",ans[ans.size()-1]);

// }
#include <bits/stdc++.h>
using namespace std;
int n, t[100000 << 2];
int arr[100000+1],arr1[100000+1],arr2[100000+1];
void build(int tl, int tr,int v)
{
    if(tl==tr){
        t[v] = arr[tl];
    }
    else
    {
        int tm = (tl+tr)/2;
        build(tl,tm,2*v);
        build(tm+1,tr,2*v+1);
        t[v] = max(t[2*v],t[2*v+1]);
    }
    
}
int getmax(int v,int tl, int tr, int l, int r)
{
    if(l > r)return 0;
    // if(l==r)return t[v];
    if(l==tl && r == tr){
        return t[v];
    }
    int tm = (tl+tr)/2;
    int k = max(getmax(2*v,tl,tm,l,min(r,tm)),getmax(2*v+1,tm+1,tr,max(l,tm+1),r));
    // printf("%d\n",k);
    return k;
}
int combine(int a, int b) {
    if (a >= b) 
        return a;
    if (b > a)
        return b;
}
void update(int v, int tl ,int tr ,int pos, int val)
{
    if(tl==tr){
        t[v] = val;
    }
    else
    {
        int tm = (tl+tr)/2;
        if(pos <= tm){
            update(2*v,tl,tm,pos,val);
        }
        else
        {
            update(2*v+1,tm+1,tr,pos,val);
        }
        t[v] = combine(t[2*v],t[2*v+1]);
    }
    // printf("%d\n",t[v]);
    
}
int main()
{
    // int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &arr[i], &arr1[i], &arr2[i]);
    }
    memset(t,0,sizeof(t));
    build(0,n-1,1);
    // printf("asf\n");
    vector<int>ans(n);
    for (int i = n-1; i >= 0; i--)
    {
        ans[i] = arr[i];
        // printf("1-->%d\n",ans[i]);
        if(i+arr1[i] > n-1){
            update(1,0,n-1,i,ans[i]);
        }
        // printf("%d %d\n",i+arr1[i],t[i+arr1[i]]);
        int k = getmax(1,0,n-1,i+arr1[i],min(i+arr2[i],n-1));
        ans[i] += k;
        update(1,0,n-1,i,ans[i]);
        // printf("%d\n",t[1]);
        // printf("k-->%d\n",k);
        // printf("2-->%d\n",ans[i]);
    }
    printf("%d\n",t[1]);
 
}
