#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map <ll,ll> mp;
vector<ll> vec;
void primeFactors(ll n)
{
    while (n % 2 == 0){
        mp[2]++;
        n = n/2;
    }
    for (ll i = 3; i <= sqrt(n); i = i + 2){
        while (n % i == 0)  {
            mp[i]++;
            n = n/i;
        }
    }
    if (n > 2)
        mp[n]++;
}
int main()
{
    int T;
    cin >> T;
    while(T--){
        ll n;
        scanf("%lld", &n);
        mp.clear();
        vec.clear();
        primeFactors(n);
        ll k = sqrt(n);
        ll mx = 0, d;
        for(ll i = 2; i <= k; i++){
            if(n%i != 0) continue;
            if(mp[i] == 0) continue;
            else{
                if(mp[i] > mx){
                    mx = mp[i];
                    d = i;
                }
            }
        }
        while(1){
            if(n/d % d == 0){
                vec.push_back(d);
                n = n/d;
            }
            else break;
        }
        vec.push_back(n);
        printf("%d\n",vec.size());
        for(int i = 0; i < vec.size(); i++){
            printf("%lld ",vec[i]);
        }
        cout << "\n";
    }
    return 0;
}