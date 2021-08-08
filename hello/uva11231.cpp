#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll a, b, c;
    while (scanf("%lld %lld %lld", &a, &b, &c)==3 && a !=0)
    {
        if(c==0){
            double d = (a-7)*(b-7);
            d = floor(d/2);
            printf("%.0lf\n", d);
        }
        else
        {
            double d = (a-7)*(b-7);
            d = ceil(d/2);
            printf("%.0lf\n", d);
        }
        
    }
    
}