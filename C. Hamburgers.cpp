#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    cin >> s;
    ll pb,ps,pc,nb,ns,nc;
    cin >> nb >> ns >> nc >> pb >> ps >> pc;
    ll money;
    cin >> money;
    ll a = 0, b = 0, c = 0;
    ll ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='B')a++;
        else if(s[i]=='S')b++;
        else if(s[i]=='C')c++;
    }
    while ((nb > 0 && a!=0) || (ns > 0 && b!=0)|| (nc > 0 && c!=0))
    {
        if(nb-a < 0){
            money -= (abs(nb-a)*pb);
            nb = 0;
        }
        else{
            nb -= a;
        }
        if(ns-b < 0){
            money -= abs(ns-b)*ps;
            ns = 0;
        }
        else
        {
            ns -= b;
        }
        if(nc - c < 0){
            money -= abs(nc-c)*pc;
            nc = 0;
        }
        else
        {
            nc -= c;
        }
        if(money < 0){
            break;
        }
        else
        {
            ans++;
        }
    }
    int k = a*pb + b*ps + c*pc;
    if(money>0){
        ans += money/k;
    }
    cout << ans <<endl;
}