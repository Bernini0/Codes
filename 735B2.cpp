#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        vector<pair<ll,ll>>v(n);
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &v[i].first);
            v[i].second = i+1;
        }
        sort(v.begin(),v.end());
        ll maxi = 1000000000;
        ll a, b;
        for (int i = 1; i < n; i++)
        {
            ll c = v[i-1].first|v[i].first;
            if(c < maxi){
                maxi = c;
                a = v[i-1].second;
                b = v[i].second;
            }
            else if(c==maxi){
                if(a*b < v[i-1].second*v[i].second){
                    a = v[i-1].second;
                    b = v[i].second;
                }
            }
        }
        ll ans = a*b - (k*maxi);
        printf("%lld\n",ans);
    }
    
}