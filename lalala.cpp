#include <bits/stdc++.h>
using namespace std;
 
using ull = unsigned long long int;
using ll = long long int;
using du = double;
using ld = long du;
using vi = vector<int>;
using vll = vector<ll>;
using vld = vector<ld>;
using vdu = vector<du>;
using vs = vector<string>;
using vc = vector<char>;
 
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define sp(x) setprecision(x)<<fixed
#define loop(i,n) for(int i=0;i<n;i++)
#define ff first
#define ss second
#define pi acos(-1)
#define meme(a,x) memset(a,x,sizeof(a))
#define fout() fflush(stdout)
//debugger
 
#ifdef KAIZER
#include "debug.h"
#else
#define debug(x...)
#endif
//debugger
 
bool comp(const int &a, const int &b)
{
    return a>b;
}
bool comp2(const pair<int,set<int>> &a, pair<int,set<int>> &b)
{
    if(a.ss.size()!=b.ss.size()) return a.ss.size()>b.ss.size();
    else return a.ff<b.ff;
}
 
void f(ll q, vll &a)
{
    for(ll i=2;i<=sqrt(q);i++)
    {
        if(q%i==0)
        {
            a.push_back(i);
            if(i!=q/i) a.push_back(q/i);
            //debug(i,a);
        }
    }
}
 
int main()
{
    FASTIO;
    int t;
    cin>>t;
    while(t--)
    {
        ll p,q;
        cin>>p>>q;
        if(p%q) cout<<p<<endl;
        else
        {
            vll divs;
            divs.push_back(q);
            f(q, divs);
            ll ans=-1;
            //debug(divs);
            for(auto it: divs)
            {
                ll x=p;
                while(x%q==0) x/=it;
                //debug(2,x,it);
                ans=max(ans,x);
            }
            cout<<ans<<endl;
        }
    }
}