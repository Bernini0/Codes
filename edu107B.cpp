#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll bigmod(ll a, ll b)
{
    if (a == 0)
        return 1;
    ll product = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            product *= a;
            b--;
        }
        a *= a;
        b /= 2;
    }
    return product;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        bool lal = false;
        if(a > b){
            swap(a,b);
            lal = true;
        }
        int p = bigmod(10,a-1);
        // printf("%d\n",a);
        // int d = a - c;
        int e = bigmod(10,b-1);
        if(a > c){
            e += bigmod(10,c-1);
        }
        if(lal){
            printf("%d %d\n",e,p);
        }
        else
        {
            printf("%d %d\n",p,e);
        }
        
    }
    
}