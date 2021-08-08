#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d %d",&x,&y );
        int a, b;
        scanf("%d %d", &a, &b);
        if(2*a <= b){
            long long int c = (x+y)*a;
            printf("%lld\n",c);
        }
        else
        {
            long long int d = min(x,y);
            long long int e = d*b;
            d = (x+y-d-d);
            e = e + d*a;
            printf("%lld\n",e);
        }
    }    
    
}