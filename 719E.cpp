#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        string s;
        cin >> s;
        set<pair<ll,ll>>s1;
        ll count_of_star = 0;
        for (int i = 0; i < n;)
        {
            if(s[i]=='*'){
                count_of_star++;
                bool gese = false;
                while (i+1 < n && s[i+1]==s[i])
                {
                    gese = true;
                    count_of_star++;
                    i++;
                }
                s1.insert({count_of_star,i*1ll});
                // printf("%d %d\n",count_of_star,i-1);
            }
            i++;
        }
        if(s1.size()<=1){
            printf("0\n");
            continue;
        }
        ll arr1[s1.size()],arr2[s1.size()];
        ll k = s1.begin()->second;
        int l = 1;
        arr1[0] = 0;
        arr2[s1.size()-1] = 0;
        auto it = s1.begin();
        for(auto i = ++s1.begin(); i != s1.end(); i++,it++){
            arr1[l] = arr1[l-1];
            ll c = i->first-it->first;
            ll a = i->second-k-c;
            ll b = it->first;
            arr1[l] += (a*b);
            k = i->second;
            l++;
        }
        it = --s1.end();
        auto i = --it;
        it = --s1.end();
        l = s1.size()-2;
        ll gone = 0;
        for(i; l >= 0; i--,it--,l--){
            arr2[l] = arr2[l+1];
            ll c = it->second-(count_of_star-i->first-gone)+1;
            ll a = c - i->second-1;
            ll b = count_of_star-i->first;
            arr2[l] += (a*b);
            gone+= it->first - i->first;
        }
        ll minimum = 1000000000000000;
        for (int j = 0; j < s1.size(); j++)
        {
            minimum = min(minimum,arr1[j]+arr2[j]);
            // printf("%lld %lld\n",arr1[j],arr2[j]);
        }
        printf("%lld\n",minimum);
    }
    
}