#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> prime;
vector<ll> ans;
void normal_seive(ll n)
{
    ll a = sqrt(n);
    int arr1[a+1];
    memset(arr1, 0, sizeof(arr1));
    for (int i = 3; i * i <= a; i++)
    {
        if (arr1[i] == 0)
        {
            for (int j = i * i; j <= a; j += 2 * i)
            {
                arr1[j] = 1;
            }
        }
    }
    prime.push_back(2);
    for (int i = 3; i <= a; i += 2)
    {
        if (arr1[i] == 0)
        {
            prime.push_back(i);
        }
    }
}
int arr[100005];
ll segmented_seive(ll a, ll b)
{
    
    memset(arr,0,sizeof(arr));
    if(a==1)a++;
    for (int i = 0; i < prime.size() && prime[i]*prime[i] <= b; i++)
    {
        ll j = prime[i]*prime[i];
        if(j < a){
            j = ((a+prime[i]-1)/prime[i])*prime[i];
        }
        for ( ; j <= b; j+=prime[i])
        {
            arr[j-a] = 1;
        }
        
    }
    ll res = 0;
    for (ll i = a; i <= b; i++)
    {
        if(arr[i-a]==0){
            res++;
        }
    }
    return res;
    
}
int main()
{

    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        ll l, r;
        ans.clear();
        prime.clear();
        scanf("%lld %lld", &l, &r);
        if (l > r)
            swap(l, r);
        normal_seive(r);
        // printf("%d\n",prime.size());
        ll temp = segmented_seive(l, r);
        printf("Case %d: %lld\n",tc, temp);
    }
    // printf("%d\n",prime.size());
    // for (int i = 0; i < prime.size(); i++)
    // {
    //     printf("%d ",prime[i]);
    // }
    // printf("\n");
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     printf("%lld ",ans[i]);
    // }
}