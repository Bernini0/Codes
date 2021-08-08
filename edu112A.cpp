#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll n;
        scanf("%lld", &n);
        ll c = n / 10;
        if (c > 0)
        {
            c--;
        }
        ll ti = c * 25;
        ll d = c * 10;
        if(n-d<= 6)ti+= 15;
        else if(n-d <= 8)ti+=20;
        else if (n - d <=10)
            ti += 25;
        else if (n - d == 19)
            ti += 50;
        else if (n - d == 11 || n - d == 12)
            ti += (ll)30;
        else if (n - d == 13 || n - d == 14)
            ti += (ll)35;
        else if (n - d == 15 || n - d == 16)
            ti += (ll)40;
        else if (n - d == 17 || n - d == 18)
            ti += (ll)45;
        printf("%lld\n", ti);
    }
}