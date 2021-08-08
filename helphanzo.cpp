#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> prime;
void seive(ll a)
{
    int arr[a + 1];
    memset(arr, 0, sizeof(arr));
    for (int i = 3; i * i <= a; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i * i; j <= a; j += 2 * i)
            {
                arr[j] = 1;
            }
        }
    }
    prime.push_back(2);
    for (int i = 3; i <= a; i += 2)
    {
        if (arr[i] == 0)
        {
            prime.push_back(i);
        }
    }
}
int arr[100002];
 

ll segmentedSieve ( ll a, ll b ) {
    if ( a == 1 ) a++;
 
    int sqrtn = sqrt ( b );
 
    memset ( arr, 0, sizeof arr );
 
    for ( int i = 0; i < prime.size() && prime[i] <= sqrtn; i++ ) {
        int p = prime[i];
        ll j = p * p;
        if ( j < a ) j = ( ( a + p - 1 ) / p ) * p;
 
        for ( ; j <= b; j += p ) {
            arr[j-a] = 1;
        }
    }
 
    ll res = 0;
    for ( ll i = a; i <= b; i++ ) {
        if ( arr[i-a] == 0 ) res++;
    }
    return res;
}

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++)
    {
        ll l, r;
        scanf("%lld %lld", &l, &r);
        if (l > r)
            swap(l, r);
        ll a = sqrt(r);
        seive(a);
        ll ans = segmentedSieve(l,r);
        printf("Case %d: %lld\n",tc,ans);
    }
}