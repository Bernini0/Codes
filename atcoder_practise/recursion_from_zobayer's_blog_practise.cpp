#include <bits/stdc++.h>
using namespace std;
/*
//prob:-1
void print_in_reverse_order_using_recursion(vector<int>&v,int i,int s){
    // printf("%d\n",v[i]);
    if(i==s)return;
    print_in_reverse_order_using_recursion(v,i+1,v.size());
    printf("%d ",v[i]);
}
int main()
{
    vector<int>v;
    int n;
    scanf("%d", &n);
    int c;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &c);
        v.push_back(c);
    }
    print_in_reverse_order_using_recursion(v,0,v.size());
}
*/
//prob:-02
/*
void recursion(vector<int>&v,int i, int n)
{
    if(i>(n-i))return;
    printf("%d %d\n",v[i],v[n-1-i]);
    recursion(v,i+1,n);
}
int main()
{
    int n;
    scanf("%d", &n);
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    recursion(v,0,n);
}
*/
//prob:-03
/*
void recursion(int i, int n, int *arr)
{
    if (i == n)
        return;
    if (*(arr + i) % 2 == 1)
    {
        *(arr + i) = -1;
    }
    recursion(i + 1, n, arr);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    recursion(0, n, arr);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != -1)
        {
            printf("%d ", arr[i]);
        }
    }
}
*/
//prob:-05
/*
#define ll long long int
ll powmod(ll a, ll b)
{
    ll product = 1;
    while(b > 0){
    if( b & 1){
        product *= a;
        b--;
    }
    a *= a;
    b /= 2;
    }
    return product;
}
ll recursion(ll x, ll p){
    if(p==0)return 1;
    else return recursion(x,p-1)+powmod(x,p);

}
int main()
{
    int x, p;
    scanf("%d %d", &x, &p);
    // printf("%lld\n",powmod(x,p));
    ll c = recursion(x,p-1);
    printf("%lld\n",c);
}
*/
//prob:-08
/*
int gcd(int a, int b)
{
    if(b==0)return a;
    gcd(b,a%b);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int c = gcd(a,b);
    printf("%d\n",c);
}
*/
//prob:-08
/*
bool recursion(int i, int n, int number)
{
    if (i > n)
        return false;
    if (number % i == 0)
        return true;
    recursion(i + 1, n, number);
}
int main()
{
    int n;
    scanf("%d", &n);
    int n2 = sqrt(n);
    if (n == 1)
    {
        printf("yes\n");
        return 0;
    }
    if (!recursion(2, n2, n))
    {
        printf("no\n");
    }
    else
    {
        printf("yes\n");
    }
}
*/
// prom:-10
// lcm with recursion
// think simple(you thinking is too complicated)
// we know that lcm(a,b) = l, is the first number where l%a==0 and
// l%b==0 and(l/a+l/b)==minimum,so we can check for such number l,
// as (a*m % b== 0)from m = 1, the first number to satisfy this is
// the lcm.
/*
#define ll long long int
ll powmod(ll a, ll b)
{
    ll product = 1;
    while (b > 0)
    {
        if(b&1){
            product *= a;
            b--;
        }
        a *= a;
        b/=2;
    }
    return product;
}
ll recursion(ll a, ll b,ll i)
{
    ll x = 1;
    if(i > max(a,b))return x;
    int cnt1 = 0, cnt2 = 0;
    while (a%i==0)
    {
        a/= i;
        cnt1++;
    }
    while (b%i==0)
    {
        b/= i;
        cnt2++;
    }
    x *= powmod(i,max(cnt1,cnt2));
    return x*recursion(a,b,i+1);
    
}
ll lcm(ll a, ll b, ll i){
    if((a*i) %b==0)return a*i;
    else return lcm(a,b,i+1);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    ll ans = recursion(a,b,2);
    int ans2 = lcm(a,b,1);
    printf("%lld\n",ans2);
    printf("%lld\n",ans);
}
*/
//prob:-11
/*
void recursion(int c, int n, int *arr,int i)
{
    if(i >= n){
        *(arr+i-1) = c;
        return;
    }
    if(*(arr+i) > c){
        c = *(arr+i);
    }
    recursion(c,n,arr,i+1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int c = arr[0];
    recursion(c,n,arr,1);
    printf("%d\n",arr[n-1]);
}
*/
void recursion()
{
    
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
}