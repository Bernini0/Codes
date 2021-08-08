#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll a,b,c,d,e,f,g,h;
    //scanf("%I64d  %I64d  %I64d",&a, &b, &c);
    cin >> a >> b >> c;

    g=a%c;
    h=b%c;
    if (a==b && b==c)
    {
        printf("1");
        return 0;
    }
    
    if (g>0)
    {
        d=a/c +1;
    }
    else
    {
        d=a/c;
    }
    if (h>0)
    {
        e=b/c +1;
    }
    else
    {
        e= b/c;
    }
 
    f=d*e;
    cout << f << "\n";
 
    return 0;
 
}