#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll r,b,d;
        scanf("%lld %lld %lld", &r, &b, &d);
        if(r < b)swap(r,b);
        if(r > b*(d+1)){
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
        
    }
    
}