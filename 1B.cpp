#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    vector<ll>v;
    v.push_back(1);
    ll c;
    for (ll i = 1;; i++)
    {
        c = (i+1)/__gcd(i+1,v[i-1]);
        c *= v[i-1];
        // printf("%lld\n",c);
        if(c<0){
            break;
        }
        else
        {
            v.push_back(c);
        }
    }
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll l;
        scanf("%lld", &l);
        int idx = lower_bound(v.begin(),v.end(),l)-v.begin();
        // printf("%lld\n",l);
        if(v[idx]==l){
            printf("%d\n",idx+1);
            printf("1");
            for (int i = 2; i <= idx+1; i++)
            {
                printf(" %d",i);
            }
            printf("\n");
        }
        else
        {
            printf("-1\n");
        }
    }
    
}